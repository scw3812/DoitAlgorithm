#include <stdio.h>

int main5(void) {
	int n;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &n);

	if (n > 0) {
		printf("�� ���� ����Դϴ�.");
	}
	else if(n < 0){
		printf("�� ���� �����Դϴ�.");
	}
	else {
		printf("�� ���� 0�Դϴ�.");
	}

	return 0;
}