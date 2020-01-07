#include <stdio.h>

int main6(void) {
	int i, n;
	int sum = 0;
	
	puts("1부터 n까지의 합을 구합니다."); //puts()는 끝 널 문자 대신 \n을 넣는다
	printf("n의 값 : ");
	scanf_s("%d", &n);

	i = 1;
	while (i <= n) {
		sum += i;
		i++;
	}
	
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
	printf("i의 값은 %d", i);

	return 0;
}