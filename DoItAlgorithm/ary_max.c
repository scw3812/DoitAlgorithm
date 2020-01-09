#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n) {
	int i;
	int max = a[0];
	for (i = 1; i < n; i++) {
		if (a[i] > max) max = a[i];
	}
	return max;
}

int minof(const int a[], int n) {
	int i;
	int min = a[0];
	for (i = 0; i < n; i++) {
		if (a[i] < min) min = a[i];
	}
	return min;
}

int sumofary(const int a[], int n) {
	int i;
	int sum = 0;
	for (i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}

double aveof(const int a[], int n) {
	int i;
	int sum = 0;
	for (i = 0; i < n; i++) {
		sum += a[i];
	}
	double avg = sum / (double)n;

	return avg;
}

int main2_5(void) {
	int i;
	int* height;
	int number;
	printf("사람 수 : ");
	scanf_s("%d", &number);
	height = calloc(number, sizeof(int));
	printf("%d 사람의 키를 입력하세요\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf_s("%d", height+i);
	}
	printf("최댓값은 %d입니다.\n", maxof(height, number));
	printf("최솟값은 %d입니다.\n", minof(height, number));
	printf("합계는 %d입니다.\n", sumofary(height, number));
	printf("평균은 %f입니다.\n", aveof(height, number));

	free(height);

	return 0;
}