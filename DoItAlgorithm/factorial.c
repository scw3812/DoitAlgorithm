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
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &x);
	printf("%d�� �������� ���� %d�Դϴ�.\n", x, onefactorial(x));

	return 0;
}