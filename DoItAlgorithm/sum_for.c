#include <stdio.h>

int main7(void) {
	int i, n;
	int sum = 0;
	puts("1부터 n까지의 합을 구합니다.");
	printf("n의 값 : ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		sum += i;
	}
	printf("1부터 %d까지의 합은 %d입니다.", n, sum);

	return 0;
}