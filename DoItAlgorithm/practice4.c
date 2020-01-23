#include <stdio.h>
#include <stdlib.h>

int long_cmp(const long* x, const long* y) {
	if (*x > * y) {
		return -1;
	}
	else if (*x < *y) {
		return 1;
	}
	else {
		return 0;
	}
}

void* seqsearch(const void* key, const void* base, size_t nmemb, size_t size,
	int(*compar)(const void*, const void*)) {
	char* x = (char*)base;
	for (size_t i = 0; i < nmemb; i++) {
		if (!compar(key, (const void*)&x[i * size])) {
			return (&x[i * size]);
		}
	}
	return NULL;
}

void* binsearch(const void* key, const void* base, size_t nmemb, size_t size,
	int(*compar)(const void*, const void*)) {
	char* x = (char*)base;
	size_t pl = 0;
	size_t pr = nmemb - 1;
	size_t pc;

	while (1) {
		pc = (pl + pr) / 2;
		if (!compar(key, (const void*)&x[pc * size])) return (&x[pc * size]);
		else if (compar(key, (const void*)&x[pc * size]) == 1) pl = pc + 1;
		else pr = pc - 1;
		if (pl > pr) break;
	}

	return NULL;
}

void* bsearchx(const void* key, const void* base, size_t nmemb, size_t size,
	int(*compar)(const void*, const void*)) {
	char* x = (char*)base;
	size_t pl = 0;
	size_t pr = nmemb - 1;
	size_t pc;

	while (1) {
		pc = (pl + pr) / 2;
		if (!compar(key, (const void*)&x[pc * size])) {
			for (size_t i = 0; i <= pc*size; i++) {
				if (!compar(key, (const void*)&x[i * size])) {
					return (&x[i * size]);
				}
			}
		}
		else if (compar(key, (const void*)&x[pc * size]) == 1) pl = pc + 1;
		else pr = pc - 1;
		if (pl > pr) break;
	}

	return NULL;
}

void long_search() {
	int i, nx, ky;
	long* x;
	int* p;
	puts("bserch 함수를 사용하여 검색");
	printf("요소 개수 : ");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(long));

	printf("내림차순으로 입력하세요\n");
	printf("x[0] : ");
	scanf_s("%d", &x[0]);
	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf_s("%d", &x[i]);
		} while (x[i] > x[i - 1]);
	}

	printf("검색값 : ");
	scanf_s("%d", &ky);

	p = bsearchx(&ky, x, nx, sizeof(long),
		(int(*)(const void*, const void*)) long_cmp);

	if (p == NULL) {
		puts("검색에 실패했습니다");
	}
	else {
		printf("%d은(는) x[%d]에 있습니다\n", ky, (int)(p - x));
	}
	free(x);
}

int main(void) {
	long_search();

	return 0;
}