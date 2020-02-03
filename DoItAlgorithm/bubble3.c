#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do{ type t = x; x = y; y = t; } while(0)

void bubble4(int a[], int n) {
	int k = 0;
	while (k < n - 1) {
		int j;
		int last = n - 1;
		for (j = n - 1; j > k; j--) {
			if (a[j - 1] > a[j]) {
				swap(int, a[j - 1], a[j]);
				last = j;
			}
		}
		k = last;
	}
}

void shaker(int a[], int n) {
	int left = 0;
	int right = n - 1;
	int last = right;
	while (left < right) {
		int j;
		for (j = right; j > left; j--) {
			if (a[j - 1] > a[j]) {
				swap(int, a[j - 1], a[j]);
				last = j;
			}
		}
		left = last;

		for (j = left; j < right; j++) {
			if (a[j] > a[j + 1]) {
				swap(int, a[j], a[j + 1]);
				last = j;
			}
		}
		right = last;
	}
}

void selection(int a[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		int min = i;
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		for (int m = 0; m < n; m++) {
			if (m == i) {
				printf("  *");
			}
			else if (m == min) {
				printf("  +");
			}
			else {
				printf("   ");
			}
		}
		putchar('\n');
		for (int m = 0; m < n; m++) {
			printf("%3d", a[m]);
		}
		putchar('\n');
		swap(int, a[i], a[min]);
	}
}

int main6_3(void) {
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

	selection(x, nx);
	printf("%d\n", is_sorted(x, nx));

	puts("오름차순으로 정렬했습니다.");
	for (i = 0; i < nx; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}

	free(x);

	return 0;
}