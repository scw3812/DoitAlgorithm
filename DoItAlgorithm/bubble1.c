#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do{ type t = x; x = y; y = t; } while(0)

void bubble(int a[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (a[j - 1] > a[j]) {
				swap(int, a[j - 1], a[j]);
			}
		}
	}
}

void bubble2(int a[], int n) {
	int i, j;
	for (i = n - 1; i > 0; i--) {
		printf("패스 %d\n", n - i);
		for (j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				for (int k = 0; k < n; k++) {
					if (k == j) {
						printf(" %d +", a[k]);
					}
					else {
						printf(" %d ", a[k]);
					}
				}
				putchar('\n');
				swap(int, a[j], a[j + 1]);
			}
			else {
				for (int k = 0; k < n; k++) {
					if (k == j) {
						printf(" %d -", a[k]);
					}
					else {
						printf(" %d ", a[k]);
					}
				}
				putchar('\n');
			}
		}
	}
}

int main6_1(void) {
	int i, nx;
	int* x;
	
	puts("버블 정렬");
	printf("요소 개수 : ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	bubble2(x, nx);

	puts("오름차순으로 정렬했습니다.");
	for (i = 0; i < nx; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}

	free(x);

	return 0;
}