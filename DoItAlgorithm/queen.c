#include <stdio.h>

int pos[8];
int flag_a[8];
int flag_b[15];
int flag_c[15];

void print(void) {
	int i, j;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (pos[i] == j) {
				printf("��");
			}
			else {
				printf("��");
			}
		}
		putchar('\n');
	}
	putchar('\n');
}

void set(int i) {
	int j;
	for (j = 0; j < 8; j++) {		
		if (!flag_a[j] && !flag_b[i + j] && !flag_c[i - j + 7]) {
			pos[i] = j;
			if (i == 7) {
				print();
			}
			else {
				flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 1;
				set(i + 1);
				flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 0;
			}
		}
	}
}

int main5_5(void) {
	int i;
	for (i = 0; i < 8; i++) {
		flag_a[i] = 0;
	}
	for (i = 0; i < 15; i++) {
		flag_b[i] = flag_c[i] = 0;
	}
	set(0);

	return 0;
}