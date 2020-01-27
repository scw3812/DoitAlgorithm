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
	IntStack s;
	Initialize(&s, 100);

Top:
	if (n > 0) {
		Push(&s, n);
		n = n - 1;
		goto Top;
	}
	if (n > 1) {
		Push(&s, n);
		n = n - 2;
		goto Top;
	}
	if (!IsEmpty(&s)) {
		Pop(&s, &n);
		printf("%d\n", n);
		goto Top;
	}

	Terminate(&s);
}

int main(void) {
	int x;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &x);
	recur3(x);

	return 0;
}