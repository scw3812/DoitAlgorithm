#include <stdio.h>
#include "IntStack.h"

void menuswitch(int menu, IntStack* s) {
	int x;
	switch (menu) {
	case 1:
		printf("������ : ");
		scanf_s("%d", &x);
		if (PushDouble(s, x) == -1) {
			puts("\a���� : Ǫ�ÿ� �����Ͽ����ϴ�.");
		}
		break;
	case 2:
		if (PopDouble(s, &x) == -1) {
			puts("\a���� : �˿� �����Ͽ����ϴ�.");
		}
		else {
			printf("�� �����ʹ� %d�Դϴ�.\n", x);
		}
		break;
	case 3:
		if (PeekDouble(s, &x) == -1) {
			puts("\a���� : ��ũ�� �����Ͽ����ϴ�.");
		}
		else {
			printf("��ũ �����ʹ� %d�Դϴ�.\n", x);
		}
		break;
	case 4:
		PrintDouble(s);
		break;
	case 5:
		Clear(s);
		break;
	case 6:
		printf("������ : ");
		scanf_s("%d", &x);
		int i = SearchDouble(s, x);
		if (i == -1) {
			puts("\a���� : �˻��� �����Ͽ����ϴ�.");
		}
		else {
			printf("�˻� �����ʹ� %d�� �ֽ��ϴ�.\n", i);
		}
		break;
	case 7:
		if (IsEmpty(s)) {
			puts("��� �ֽ��ϴ�.");
		}
		else if (IsFull(s)) {
			puts("���� �� �ֽ��ϴ�.");
		}
		else {
			puts("������ �� �ֽ��ϴ�.");
		}
		break;
	}
}

int main(void) {
	IntStack s1;
	IntStack s2;
	if (InitializeDouble(&s1, &s2, 10) == -1) {
		puts("���� ������ �����Ͽ����ϴ�.");
		return 1;
	}

	while (1) {
		int menu, stackno;
		printf("���� ������ �� : %d + %d / %d\n", Size(&s1), Size(&s2), Capacity(&s1));
		printf("(1)Ǫ�� (2)�� (3)��ũ (4)��� (5)Ŭ���� (6)�˻� (7)IsEmpty?/IsFull? (0)���� : ");
		scanf_s("%d", &menu);
		if (menu == 0) break;

		printf("1? 2? : ");
		scanf_s("%d", &stackno);
		if (stackno == 1) {
			menuswitch(menu, &s1);
		}
		else {
			menuswitch(menu, &s2);
		}
	}
	Terminate(&s1);
	Terminate(&s2);

	return 0;
}