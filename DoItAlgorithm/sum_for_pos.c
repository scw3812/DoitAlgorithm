#include <stdio.h>

int main8(void) {
	int i, n;
	int sum = 0;
	puts("1���� n������ ���� ���մϴ�.");
	do {
		printf("n �� : ");
		scanf_s("%d", &n);
	} while (n <= 0);
	sum = 0;
	for (i = 0; i <= n; i++) {
		sum += i;
	}
	printf("1���� %d������ ���� %d�Դϴ�.", n, sum);

	return 0;
}