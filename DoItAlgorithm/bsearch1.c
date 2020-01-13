#include <stdio.h>
#include <stdlib.h>

int int_cmp(const int* a, const int* b) {
	if (*a < *b) {
		return -1;
	}
	else if (*a == *b) {
		return 0;
	}
	else {
		return 1;
	}
}

int main3_4(void) {
	int i, nx, ky;
	int* x;
	int* p;
	puts("bserch 함수를 사용하여 검색");
	printf("요소 개수 : ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));

	printf("오름차순으로 입력하세요\n");
	printf("x[0] : ");
	scanf_s("%d", &x[0]);
	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf_s("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}

	printf("검색값 : ");
	scanf_s("%d", &ky);

	p = bsearch(&ky, x, nx, sizeof(int),
		(int(*)(const void*, const void*)) int_cmp);

	if (p == NULL) {
		puts("검색에 실패했습니다");
	}
	else {
		printf("%d은(는) x[%d]에 있습니다\n", ky, (int)(p-x));
	}
	free(x);

	return 0;
}