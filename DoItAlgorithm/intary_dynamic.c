#include <stdio.h>
#include <stdlib.h>

int main2_4(void) {
	int i;
	int* a;
	int na;
	printf("요소 개수 :");
	scanf_s("%d", &na);
	a = calloc(na, sizeof(int));

	if (a == NULL) {
		printf("메모리 확보 실패");
	}
	else {
		printf("%d개의 정수를 입력하세요\n", na);
		for (i = 0; i < na; i++) {
			printf("a[%d] : ", i);
			scanf_s("%d", &a[i]);
		}
		printf("각 요소값은 아래와 같습니다.\n");
		for (i = 0; i < na; i++) {
			printf("a[%d] = %d\n", i, a[i]);
		}
		free(a);
	}

	return 0;
}