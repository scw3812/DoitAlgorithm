#include <stdio.h>
#include "IntStack.h"

void recur(int n) {
	if (n > 0) {
		recur(n - 1);
		printf("%d\n", n);
		recur(n - 2);
	}
}

void onerecur(int n) {
	IntStack stk;
	Initialize(&stk, 100);

Top :
	if (n > 0) {
		Push(&stk, n);
		n = n - 1;
		goto Top;
	}

	if (!IsEmpty(&stk)) {
		Pop(&stk, &n);
		printf("%d\n", n);
		n = n - 2;
		goto Top;
	}

	Terminate(&stk);
}

void recur3(int n) {
	int x = 0;
	IntStack s1, s2;
	Initialize(&s1, 100);
	Initialize(&s2, 100);

	while (1) {
		if (n > 0) {
			Push(&s1, n);
			Push(&s2, x);

			if (x == 0) {
				n = n - 1;
			}
			else if(x == 1){
				n = n - 2;
				x = 0;
			}
			continue;
		}
		do {
			Pop(&s1, &n);
			Pop(&s2, &x);
			x++;
			if (x == 2) {
				printf("%d\n", n);
				if (IsEmpty(&s1)) return;
			}
		} while (x == 2);
	}
	Terminate(&s1);
	Terminate(&s2);
}

int main5_3(void) {
	int x;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &x);
	recur3(x);

	return 0;
}