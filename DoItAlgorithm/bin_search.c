#include <stdio.h>
#include <stdlib.h>

int bin_search(const int a[], int n, int key) {
	int pl = 0;
	int pr = n - 1;
	int pc;

	for (; ;) {
		pc = (pl + pr) / 2;
		if (a[pc] == key) return pc;
		else if (a[pc] < key) pl = pc + 1;
		else pr = pc - 1;
		if (pl > pr) break;
	}

	return -1;
}

int bin_search2(const int a[], int n, int key) {
	int pl = 0;
	int pr = n - 1;
	int pc;

	for (; ;) {
		pc = (pl + pr) / 2;
		if (a[pc] == key) {
			int i;
			for (i = pc; i >= 0; i--) {
				if (a[i] == key) continue;
				return i + 1;
			}	
		}
		else if (a[pc] < key) pl = pc + 1;
		else pr = pc - 1;
		if (pl > pr) break;
	}

	return -1;
}

int main3_3(void) {
	int i, nx, ky, idx;
	int* x;
	puts("이진 검색");
	printf("요소 개수 : ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("오름차순으로 입력하세요.\n");
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
	idx = bin_search2(x, nx, ky);
	if (idx == -1) {
		puts("검색에 실패했습니다.");
	}
	else {
		printf("%d은(는) x[%d]에 있습니다.\n", ky, idx);
	}
	free(x);
	return 0;
}