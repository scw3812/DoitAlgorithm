#include <stdio.h>

int main11(void) {
	int i, j, n;
	do {
		printf("�� �� �ﰢ���Դϱ�?");
		scanf_s("%d", &n);
	} while (n <= 0);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			putchar('*');
		}
		putchar('\n');
	}
}