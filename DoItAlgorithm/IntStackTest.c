#include <stdio.h>
#include "IntStack.h"

int main4_1(void) {
	IntStack s;
	if (Initialize(&s, 64) == -1) {
		puts("스택 생성에 실패하였습니다.");
		return 1;
	}

	while (1) {
		int menu, x;
		printf("현재 데이터 수 : %d / %d\n", Size(&s), Capacity(&s));
		printf("(1)푸시 (2)팝 (3)피크 (4)출력 (5)클리어 (6)검색 (7)IsEmpty?/IsFull? (0)종료 : ");
		scanf_s("%d", &menu);

		if (menu == 0) break;
		switch (menu) {
		case 1:
			printf("데이터 : ");
			scanf_s("%d", &x);
			if (Push(&s, x) == -1) {
				puts("\a오류 : 푸시에 실패하였습니다.");
			}
			break;
		case 2:
			if (Pop(&s, &x) == -1) {
				puts("\a오류 : 팝에 실패하였습니다.");
			}
			else {
				printf("팝 데이터는 %d입니다.\n", x);
			}
			break;
		case 3:
			if (Peek(&s, &x) == -1) {
				puts("\a오류 : 피크에 실패하였습니다.");
			}else{
				printf("피크 데이터는 %d입니다.\n", x);
			}
			break;
		case 4:
			Print(&s);
			break;
		case 5:
			Clear(&s);
			break;
		case 6:
			printf("데이터 : ");
			scanf_s("%d", &x);
			int i = Search(&s, x);
			if (i == -1) {
				puts("\a오류 : 검색에 실패하였습니다.");
			}
			else {
				printf("검색 데이터는 %d에 있습니다.\n", i);
			}
			break;
		case 7:
			if (IsEmpty(&s)) {
				puts("비어 있습니다.");
			}
			else if(IsFull(&s)){
				puts("가득 차 있습니다.");
			}
			else {
				puts("적당히 차 있습니다.");
			}
			break;
		}
	}
	Terminate(&s);

	return 0;
}