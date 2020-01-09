#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)

void ary_copy(int a[], const int b[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = b[i];
	}
}

void ary_rcopy(int a[], const int b[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = b[n - i - 1];
	}
}

void shuffle(int a[], int n) {
	srand(time(NULL));
	for (int i = n - 1; i > 0; i--) {
		int j = rand() % (i + 1);
		if (i != j) {
			swap(int, a[i], a[j]);
		}
	}
}

int main2_9(void) {
	int* a;
	int b[] = { 1, 2, 3 };
	a = calloc(3, sizeof(int));
	ary_copy(a, b, 3);
	for (int i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}
	ary_rcopy(a, b, 3);
	for (int i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}
	shuffle(a, 3);
	for (int i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}