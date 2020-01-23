#include <stdio.h>

int kuku_sum(int x, int y) {
	return x + y;
}

int kuku_mul(int x, int y) {
	return x * y;
}

void kuku(int(*calc)(int, int)) {
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%3d", (*calc)(i, j));
		}
		putchar('\n');
	}
}

void kuku2(int calc(int, int)) {
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%3d", calc(i, j));
		}
		putchar('\n');
	}
}

int main3_6(void) {
	puts("µ¡¼ÀÇ¥");
	kuku(kuku_sum);
	puts("°ö¼ÀÇ¥");
	kuku2(kuku_mul);

	return 0;
}