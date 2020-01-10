#include <stdio.h>
#include <stdlib.h>

int search_for(const int a[], int n, int key) {
	int i;
	for (i = 0; i < n; i++) {
		if (a[i] == key) return i;
	}
	return -1;
}

