#include <stdio.h>

int max3(int a, int b, int c) {
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	return max;
}

int main2(void)
{	
	printf("max3(%d %d %d) = %d\n", 3, 2, 1, max3(3, 2, 1));
	printf("max3(%d %d %d) = %d\n", 1, 2, 1, max3(1, 2, 1));
	printf("max3(%d %d %d) = %d\n", 1, 2, 3, max3(1, 2, 3));
	printf("max3(%d %d %d) = %d\n", -3, 2, 1, max3(-3, 2, 1));
	printf("max3(%d %d %d) = %d\n", 2, 2, 1, max3(2, 2, 1));
	printf("max3(%d %d %d) = %d\n", -3, 2, -1, max3(-3, 2, -1));
	printf("max3(%d %d %d) = %d\n", 1, 1, 1, max3(1, 1, 1));

	return 0;
}