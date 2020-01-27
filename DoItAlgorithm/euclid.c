#include <stdio.h>

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}

int onegcd(int x, int y) {
	while (y > 0) {
		int temp = y;
		y = x % y;
		x = temp;
	}
	return x;
}

int gcd_array(const int a[], int n) {
	if (n == 1) {
		return a[0];
	}
	else if (n == 2) {
		return gcd(a[0], a[1]);
	}
	else {
		return gcd(a[0], gcd_array(&a[1], n - 1));
	}
}

int main5_2(void) {
	int a[3];
	puts("두 정수의 최대공약수를 구합니다.");
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a[0]);
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a[1]);
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a[2]);
	printf("최대공약수는 %d입니다.", gcd_array(a, 3));

	return 0;
}