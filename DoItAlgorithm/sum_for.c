#include <stdio.h>

int main7(void) {
	int i, n;
	int sum = 0;
	puts("1���� n������ ���� ���մϴ�.");
	printf("n�� �� : ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		sum += i;
	}
	printf("1���� %d������ ���� %d�Դϴ�.", n, sum);

	return 0;
}