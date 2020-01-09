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
	printf("��� �� : ");
	scanf_s("%d", &number);
	height = calloc(number, sizeof(int));
	printf("%d ����� Ű�� �Է��ϼ���\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf_s("%d", height+i);
	}
	printf("�ִ��� %d�Դϴ�.\n", maxof(height, number));
	printf("�ּڰ��� %d�Դϴ�.\n", minof(height, number));
	printf("�հ�� %d�Դϴ�.\n", sumofary(height, number));
	printf("����� %f�Դϴ�.\n", aveof(height, number));

	free(height);

	return 0;
}