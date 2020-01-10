#include <stdio.h>
#include <stdlib.h>

int search(const int a[], int n, int key) {
	int i = 0;
	while (1) {
		if (i == n) return -1;
		if (a[i] == key) return i;
		i++;
	}
}
int search_idx(const int a[], int n, int key, int idx[]) {
	int i = 0;
	int j = 0;
	while (1) {
		if (i == n) break;
		if (a[i] == key) {
			idx[j] = i;
			j++;
		}
		i++;
	}
	return j;
}

int main3_1(void) {
	int i, nx, ky, idx;
	int* x;
	puts("���� �˻�");
	printf("��� ���� : ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}
	printf("�˻��� : ");
	scanf_s("%d", &ky);
	idx = search(x, nx, ky);
	if (idx == -1) {
		printf("�˻��� �����߽��ϴ�.");
	}
	else {
		printf("%d��(��) x[%d]�� �ֽ��ϴ�.", ky, idx);
	}
	free(x);

	return 0;
}