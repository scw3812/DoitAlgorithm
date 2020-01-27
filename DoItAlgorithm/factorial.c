#include <stdio.h>

int factorial(int n) {
	if (n > 0) {
		return n * factorial(n - 1);
	}
	else {
		return 1;
	}
}

int onefactorial(int n) {
	int fac = n;
	while (n > 1) {
		fac *= --n;
	}
	return fac;
}

int main5_1(void) {
	int x;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &x);
	printf("%d의 순차곱셈 값은 %d입니다.\n", x, onefactorial(x));

	return 0;
}