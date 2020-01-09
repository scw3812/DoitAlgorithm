#include <stdio.h>

int max4(int a, int b, int c, int d) {
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	
	return max;
}

int min3(int a, int b, int c) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;

	return min;
}

int min4(int a, int b, int c, int d) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;

	return min;
}

void sum_for() {
	int n;

	puts("1부터 n까지의 합을 구합니다.");
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
		if (i != n) {
			printf("%d + ", i);
		}
		else {
			printf("%d = %d\n", i, sum);
		}		
	}
}

int sum_gaus(int n) {
	int sum;
	if (n % 2 == 0) {
		sum = (1 + n) * n / 2;
	}
	else {
		sum = (1 + n) * (n / 2) + n / 2 + 1;
	}

	return sum;
}

int sumof(int a, int b) {
	int sum = 0;
	if (a > b) {
		for (int i = b; i <= a; i++) {
			sum += i;
		}
	}
	else {
		for (int i = a; i <= b; i++) {
			sum += i;
		}
	}
	return sum;
}

void input_minus() {
	int a, b;
	
	printf("a의 값 : ");
	scanf_s("%d", &a);
	while (1) {
		printf("b의 값 : ");
		scanf_s("%d", &b);
		if (b > a) break;
		printf("a보다 큰 값을 입력하세요!\n");
	}

	printf("b - a는 %d입니다.", b - a);
}

void ten_position() {
	int n, count;
	do {
		printf("양의 정수를 입력하세요 : ");
		scanf_s("%d", &n);
	} while (n <= 0);
	count = 0;
	while (n != 0) {
		n /= 10;
		count++;
	}
	printf("그 수는 %d자리입니다.", count);
}

void multi_table() {
	printf("  |  1  2  3  4  5  6  7  8  9\n");
	printf("--+---------------------------\n");
	for (int i = 1; i <= 9; i++) {
		printf("%d |", i);
		for (int j = 1; j <= 9; j++) {
			printf("% 3d", i * j);
		}
		putchar('\n');
	}
}

void plus_table() {
	printf("  |  1  2  3  4  5  6  7  8  9\n");
	printf("--+---------------------------\n");
	for (int i = 1; i <= 9; i++) {
		printf("%d |", i);
		for (int j = 1; j <= 9; j++) {
			printf("% 3d", i + j);
		}
		putchar('\n');
	}
}

void print_squre() {
	int n;
	puts("사각형을 출력합니다.");
	do {
		printf("입력할 수 : ");
		scanf_s("%d", &n);
	} while (n <= 0);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("* ");
		}
		putchar('\n');
	}
}

void print_rectangle() {
	int height, width;
	puts("직사각형을 출력합니다.");
	do {
		printf("높이 : ");
		scanf_s("%d", &height);
		printf("너비 : ");
		scanf_s("%d", &width);
	} while (height <= 0 || width <= 0);
	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= width; j++) {
			printf("* ");
		}
		putchar('\n');
	}
}

void triangleLB(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			putchar('*');
		}
		putchar('\n');
	}
}

void triangleLU(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= i; j--) {
			putchar('*');
		}
		putchar('\n');
	}
}

void triangleRB(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j >= n - i + 1) {
				putchar('*');
			}
			else {
				putchar(' ');
			}
		}
		putchar('\n');
	}
}

void triangleRU(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j > n - i + 1) {
				putchar(' ');
			}
			else {
				putchar('*');
			}
		}
		putchar('\n');
	}
}

void spira(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = n-i; j >= 1; j--) {
			putchar(' ');
		}
		for (int j = 1; j <= i * 2 - 1; j++) {
			putchar('*');
		}
		putchar('\n');
	}
}

void nrpira(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i-1; j++) {
			putchar(' ');
		}
		for (int j = 1; j <= 2 * (n - i + 1) - 1; j++) {
			printf("%d", i%10);
		}
		putchar('\n');
	}
}


int main3(void) {
	//printf("max3(%d, %d, %d, %d) = %d\n", 4, 3, 2, 1, max4(4, 3, 2, 1));
	//printf("min3(%d, %d, %d) = %d\n", 3, 2, 1, min3(3, 2, 1));
	//printf("min4(%d, %d, %d, %d) = %d\n", 4, 3, 2, 1, min4(4, 3, 2, 1));
	//sum_for();
	//printf("%d\n", sum_gaus(13));
	//printf("%d", sumof(6, 4));
	//input_minus();
	//ten_position();
	//multi_table();
	//plus_table();
	//print_squre();
	//print_rectangle();
	//triangleLB(3);
	//triangleLU(3);
	//triangleRB(3);
	//triangleRU(3);
	//spira(4);
	nrpira(30);
}