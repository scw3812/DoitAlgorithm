#include <stdio.h>

#define N 5

int main2_1(void) {
	int i;
	int a[N];
	for (i = 0; i < N; i++) {
		printf("a[%d] : ", i);
		scanf_s("%d", &a[i]);
	}
	puts("�� ����� ��");
	for (i = 0; i < N; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}