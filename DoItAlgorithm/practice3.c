#include <stdio.h>

typedef struct {
	int y;
	int m;
	int d;
} Date;

Date Before(Date x, int n);
Date After(Date x, int n);

int days[][12] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int is_leap(int year) {
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

Date DateOf(int y, int m, int d) {
	Date date = { y, m, d };
	return date;
}

Date After(Date x, int n) {
	if (n < 0) {
		return Before(x, -n);
	}
	x.d += n;

	while (x.d > days[is_leap(x.y)][x.m - 1]) {
		x.d -= days[is_leap(x.y)][x.m - 1];
		if (++x.m > 12) {
			x.y++;
			x.m = 1;
		}
	}

	return x;
}

Date Before(Date x, int n) {
	if (n < 0) {
		return After(x, -n);
	}
	x.d -= n;
	
	while (x.d < 1) {
		if (--x.m < 1) {
			x.y--;
			x.m = 12;
		}
		x.d += days[is_leap(x.y)][x.m - 1];
	}

	return x;
}

int main(void) {
	Date date = DateOf(2020, 11, 10);
	Date a = After(date, 25);
	printf("%d/%d/%d\n", a.y, a.m, a.d);
	Date b = Before(date, 10);
	printf("%d/%d/%d", b.y, b.m, b.d);
}