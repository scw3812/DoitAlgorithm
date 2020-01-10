#include <stdio.h>

int mdays[][12] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int isleap(int year) {
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int dayofyear(int y, int m, int d) {
	while(m != 1) {
		d += mdays[isleap(y)][m-2];
		m--;
	}
	return d;
}

int main2_13(void) {
	int year, month, day;
	int retry;
	do {
		printf("�� : "); scanf_s("%d", &year);
		printf("�� : "); scanf_s("%d", &month);
		printf("�� : "); scanf_s("%d", &day);

		printf("%d���� %d��°�Դϴ�.\n", year, dayofyear(year, month, day));
		printf("�ٽ� �ұ��?(1...��/0...�ƴϿ�) : ");
		scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
}