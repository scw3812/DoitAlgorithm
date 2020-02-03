#include <stdio.h>
#include <stdlib.h>

int int_cmp(const int* a, const int* b);

int main6_8(void) {
	int i, nx;
	int* x;
	printf("qsort�� ���� ����\n");
	printf("��� ���� : ");
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
	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < nx; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}
	free(x);

	return 0;
}