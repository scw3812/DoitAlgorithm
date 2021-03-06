#include <stdio.h>
#include <stdlib.h>

int int_cmp(const int* a, const int* b);

int main6_8(void) {
	int i, nx;
	int* x;
	printf("qsort에 의한 정렬\n");
	printf("요소 개수 : ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}
	qsort(x,
		nx,
		sizeof(int),
		(int(*)(const void*, const void*)) int_cmp
		);
	puts("오름차순으로 정렬했습니다.");
	for (i = 0; i < nx; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}
	free(x);

	return 0;
}