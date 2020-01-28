#include <stdio.h>

void move(int no, int x, int y) {
	char name[] = { 'A', 'B', 'C' };
	if (no > 1) {
		move(no - 1, x, 6 - x - y);
	}
	printf("원반[%d]를(을) %c 기둥에서 %c 기둥으로 옮김\n", no, name[x - 1], name[y - 1]);
	if (no > 1) {
		move(no - 1, 6 - x - y, y);
	}
}

int main5_4(void) {
	int n;
	printf("하노이의 탑 \n원반 개수 : ");
	scanf_s("%d", &n);
	move(n, 1, 3);

	return 0;
}