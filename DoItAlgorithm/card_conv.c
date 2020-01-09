#include <stdio.h>

#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

int card_convr(unsigned x, int n, char d[]) {
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0;
	if (x == 0) {
		d[digits++] = dchar[0];
	}
	else {
		while (x) {
			d[digits++] = dchar[x % n];
			x /= n;
		}
	}
	for (int i = 0; i < digits / 2; i++) {
		swap(char, d[i], d[digits - i - 1]);
	}

	return digits;
}

int main2_8(void) {
	int i;
	unsigned no;
	int cd;
	int dno;
	char cno[512];
	int retry;
	puts("10������ ��� ��ȯ�մϴ�.");
	do {
		printf("��ȯ�ϴ� ���� �ƴ� ���� : ");
		scanf_s("%d", &no);
		do {
			printf("� ������ ��ȯ�ұ��(2-36) : ");
			scanf_s("%d", &cd);
		} while (cd < 2 || cd > 36);
		dno = card_convr(no, cd, cno);
		for (i = dno - 1; i >= 0; i--) {
			printf("%d | %5d ... %c\n", cd, no, cno[i]);
			printf("  +------\n");
			no /= cd;
		}
		printf("    %5d\n", no);
		printf("%d�����δ� ", cd);
		for (i = 0; i < dno; i++) {
			printf("%c", cno[i]);
		}
		printf("�Դϴ�.\n");
		printf("�� �� �� �ұ��? (1-��/0-�ƴϿ�) : ");
		scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
}