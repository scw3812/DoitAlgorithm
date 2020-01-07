#include <stdio.h>

int main9(void) {
	int no;
	printf("2자리 정수를 입력하세요\n");
	do {
		printf("수는 : ");
		scanf_s("%d", &no);
	} while (no < 10 || no > 99);
	printf("변수 no 값은 %d가 되었습니다.\n", no);

	return 0;
}