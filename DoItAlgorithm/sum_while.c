#include <stdio.h>

int main6(void) {
	int i, n;
	int sum = 0;
	
	puts("1���� n������ ���� ���մϴ�."); //puts()�� �� �� ���� ��� \n�� �ִ´�
	printf("n�� �� : ");
	scanf_s("%d", &n);

	i = 1;
	while (i <= n) {
		sum += i;
		i++;
	}
	
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	printf("i�� ���� %d", i);

	return 0;
}