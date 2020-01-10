#include <stdio.h>
#include <stdlib.h>

int search_sen(int a[], int n, int key) {
	int i;
	a[n] = key;
	printf("   |");
	for (i = 0; i < n; i++)
		printf("%3d", i);
	printf("\n---+");
	for (i = 0; i < n; i++)
		printf("---", i);
	printf("-\n");

	for (i = 0; i < n; i++) {
		int j;
		printf("   |");
		printf("%*s", 3 * (i - 1) + 5, "");
		printf("*\n");
		printf("%3d|", i);
		for (j = 0; j < n; j++)
			printf("%3d", a[j]);
		putchar('\n');
		if (a[i] == key) break;
	}
	return i == n? -1 : i;
}

int main3_2(void) {
	int i, nx, ky, idx;
	int* x;
	puts("선형 검색");
	printf("요소 개수 : ");
	scanf_s("%d", &nx);
	x = calloc(nx + 1, sizeof(int));
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}
	printf("검색값 : ");
	scanf_s("%d", &ky);
	idx = search_sen(x, nx, ky);
	if (idx == -1) {
		printf("검색에 실패했습니다.");
	}
	else {
		printf("%d는(은) x[%d]에 있습니다.", ky, idx);
	}
	free(x);

	return 0;
}