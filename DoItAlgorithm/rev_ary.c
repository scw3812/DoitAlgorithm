#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

void ary_rev(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	putchar('\n');
	for (i = 0; i < n / 2; i++) {
		printf("a[%d]과 a[%d]를 교환합니다.\n", i, n - i - 1);
		swap(int, a[i], a[n - i - 1]);
		for (int j = 0; j < n; j++) {
			printf("%d ", a[j]);
		}
		putchar('\n');
	}
}

int main2_7(void) {
	int i;
	int* x;
	int nx;

	printf("요소 개수 : ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("%d개의 정수를 입력하세요\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}
	ary_rev(x, nx);
	printf("배열의 요소를 역순으로 정렬했습니다.\n");
	for (i = 0; i < nx; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}
	free(x);

	return 0;
}