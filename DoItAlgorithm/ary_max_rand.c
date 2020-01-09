#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main2_6(void) {
	int i;
	int* height;
	int number;
	srand(time(NULL));
	number = 5 + rand() % 16;
	height = calloc(number, sizeof(int));
	for (i = 0; i < number; i++) {
		height[i] = 100 + rand() % 90;
		printf("height[%d] = %d\n", i, height[i]);
	}
	printf("최댓값은 %d입니다.", maxof(height, number));
	free(height);
	
	return 0;
}