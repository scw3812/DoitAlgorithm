#include <stdio.h>
#include <stdlib.h>

int int_cmp(const int* a, const int* b) {
	if (*a < *b) {
		return 1;
	}
	else if (*a > * b) {
		return -1;
	}
	else {
		return 0;
	}
}

int main(void) {
	int i, nx, ky;
	int* x;
	int* p;
	puts("bsearch 함수를 사용하여 검색");
	printf("요소 개수 : ")
}