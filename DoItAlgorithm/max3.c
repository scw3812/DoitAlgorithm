#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
int main1(void)
{
	int a, b, c;
	int max;
	printf("�� ������ �ִ��� ���մϴ�.\n");
	printf("a�� �� : "); scanf_s("%d", & a);
	printf("b�� �� : "); scanf_s("%d", & b);
	printf("c�� �� : "); scanf_s("%d", & c);
	
	max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	
	printf("�ִ��� %d�Դϴ�.", max);
	
	return 0;
}