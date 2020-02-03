#include <stdio.h>
#include <stdlib.h>

void insertion(int a[], int n) {
	int i, j, m;
	for (i = 1; i < n; i++) {
		int tmp = a[i];
		for (m = 0; m < n; m++) {
			printf("%3d", a[m]);
		}
		putchar('\n');
		for (j = i; j > 0 && a[j - 1] > tmp; j--) {
			a[j] = a[j - 1];
		}
		a[j] = tmp;

		printf("%*s%s", 3 * j, "", (i != j) ? "^-" : "  ");
		for (m = 0; m < 3 * (i - j); m++) {
			putchar('-');
		}
		printf("+\n\n");
	}
}

int main6_4(void) {
	int i, nx;
	int* x;
	puts("단순 삽입 정렬");

	printf("요소 개수 : ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	insertion(x, nx);

	puts("오름차순으로 정렬했습니다.");
	for (i = 0; i < nx; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}

	free(x);

	return 0;
}