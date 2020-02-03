#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do{ type t = x; x = y; y = t; } while(0)

void bubble3(int a[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		int exchg = 0;
		for (j = n - 1; j > i; j--) {
			if (a[j - 1] > a[j]) {
				swap(int, a[j - 1], a[j]);
				exchg++;
			}
		}
		if (exchg == 0) break;
	}
}

int is_sorted(const int a[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		int exchg = 0;
		for (j = n - 1; j > i; j--) {
			if (a[j - 1] > a[j]) {
				exchg++;
			}
		}
		if (exchg == 0) return 1;
	}
	return 0;
}

int main6_2(void) {
	int i, nx;
	int* x;

	puts("���� ����");
	printf("��� ���� : ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	bubble3(x, nx);
	printf("%d\n", is_sorted(x, nx));

	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < nx; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}

	free(x);

	return 0;
}