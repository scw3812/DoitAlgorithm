#include <stdio.h>
#include "IntQueue.h"

int main4_3(void) {
	IntQueue que;
	if (InitializeQueue(&que, 64) == -1) {
		puts("ť ������ �����Ͽ����ϴ�.");
		return 1;
	}

	while (1) {
		int m, x;

		printf("���� ������ �� : %d / %d\n", Size(&que), Capacity(&que));
		printf("(1)��ť (2)��ť (3)��ũ (4)��� (0)���� : ");
		scanf_s("%d", &m);

		if (m == 0) break;

		switch (m) {
		case 1:
			printf("������ : ");
			scanf_s("%d", &x);
			if (FrontEnque(&que, x) == -1) {
				puts("\a���� : ��ť�� �����Ͽ����ϴ�.");
			}
			break;
		case 2:
			if (RearDeque(&que, &x) == -1) {
				puts("\a���� : ��ť�� �����Ͽ����ϴ�.");
			}
			else {
				printf("��ť�� �����ʹ� %d�Դϴ�.\n", x);
			}	
			break;
		case 3:
			if (PeekQueue(&que, &x) == -1) {
				puts("\a���� : ��ũ�� �����Ͽ����ϴ�.");
			}
			else {
				printf("��ũ�� �����ʹ� %d�Դϴ�.\n", x);
			}
			break;
		case 4:
			PrintQueue(&que);
			break;
		}
	}
	TerminateQueue(&que);

	return 0;
}