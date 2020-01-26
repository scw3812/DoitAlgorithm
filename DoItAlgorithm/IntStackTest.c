#include <stdio.h>
#include "IntStack.h"

int main4_1(void) {
	IntStack s;
	if (Initialize(&s, 64) == -1) {
		puts("���� ������ �����Ͽ����ϴ�.");
		return 1;
	}

	while (1) {
		int menu, x;
		printf("���� ������ �� : %d / %d\n", Size(&s), Capacity(&s));
		printf("(1)Ǫ�� (2)�� (3)��ũ (4)��� (5)Ŭ���� (6)�˻� (7)IsEmpty?/IsFull? (0)���� : ");
		scanf_s("%d", &menu);

		if (menu == 0) break;
		switch (menu) {
		case 1:
			printf("������ : ");
			scanf_s("%d", &x);
			if (Push(&s, x) == -1) {
				puts("\a���� : Ǫ�ÿ� �����Ͽ����ϴ�.");
			}
			break;
		case 2:
			if (Pop(&s, &x) == -1) {
				puts("\a���� : �˿� �����Ͽ����ϴ�.");
			}
			else {
				printf("�� �����ʹ� %d�Դϴ�.\n", x);
			}
			break;
		case 3:
			if (Peek(&s, &x) == -1) {
				puts("\a���� : ��ũ�� �����Ͽ����ϴ�.");
			}else{
				printf("��ũ �����ʹ� %d�Դϴ�.\n", x);
			}
			break;
		case 4:
			Print(&s);
			break;
		case 5:
			Clear(&s);
			break;
		case 6:
			printf("������ : ");
			scanf_s("%d", &x);
			int i = Search(&s, x);
			if (i == -1) {
				puts("\a���� : �˻��� �����Ͽ����ϴ�.");
			}
			else {
				printf("�˻� �����ʹ� %d�� �ֽ��ϴ�.\n", i);
			}
			break;
		case 7:
			if (IsEmpty(&s)) {
				puts("��� �ֽ��ϴ�.");
			}
			else if(IsFull(&s)){
				puts("���� �� �ֽ��ϴ�.");
			}
			else {
				puts("������ �� �ֽ��ϴ�.");
			}
			break;
		}
	}
	Terminate(&s);

	return 0;
}