#include <stdio.h>
#include "IntStack.h"

void menuswitch(int menu, IntStack* s1, IntStack* s2) {
	int x;
	switch (menu) {
	case 1:
		printf("데이터 : ");
		scanf_s("%d", &x);
		if (PushDouble(s1, s2, x) == -1) {
			puts("\a오류 : 푸시에 실패하였습니다.");
		}
		break;
	case 2:
		if (PopDouble(s1, &x) == -1) {
			puts("\a오류 : 팝에 실패하였습니다.");
		}
		else {
			printf("팝 데이터는 %d입니다.\n", x);
		}
		break;
	case 3:
		if (PeekDouble(s1, &x) == -1) {
			puts("\a오류 : 피크에 실패하였습니다.");
		}
		else {
			printf("피크 데이터는 %d입니다.\n", x);
		}
		break;
	case 4:
		PrintDouble(s1);
		break;
	case 5:
		Clear(s1);
		break;
	case 6:
		printf("데이터 : ");
		scanf_s("%d", &x);
		int i = SearchDouble(s1, x);
		if (i == -1) {
			puts("\a오류 : 검색에 실패하였습니다.");
		}
		else {
			printf("검색 데이터는 %d에 있습니다.\n", i);
		}
		break;
	case 7:
		if (IsEmpty(s1)) {
			puts("비어 있습니다.");
		}
		else if (IsFull(s1)) {
			puts("가득 차 있습니다.");
		}
		else {
			puts("적당히 차 있습니다.");
		}
		break;
	}
}

int main4_2(void) {
	IntStack s1;
	IntStack s2;
	if (InitializeDouble(&s1, &s2, 10) == -1) {
		puts("스택 생성에 실패하였습니다.");
		return 1;
	}

	while (1) {
		int menu, stackno;
		printf("현재 데이터 수 : %d + %d / %d\n", Size(&s1), Size(&s2), Capacity(&s1));
		printf("(1)푸시 (2)팝 (3)피크 (4)출력 (5)클리어 (6)검색 (7)IsEmpty?/IsFull? (0)종료 : ");
		scanf_s("%d", &menu);
		if (menu == 0) break;

		printf("1? 2? : ");
		scanf_s("%d", &stackno);
		if (stackno == 1) {
			menuswitch(menu, &s1, &s2);
		}
		else {
			menuswitch(menu, &s2, &s1);
		}
	}
	TerminateDouble(&s1, &s2);

	return 0;
}