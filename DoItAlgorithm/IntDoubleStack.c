#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

int InitializeDouble(IntStack* s1, IntStack* s2, int max) {
	s1->ptr = 0;
	s2->ptr = 0;
	s1->sign = 1;
	s2->sign = 0;
	if ((s1->stk = calloc(max, sizeof(int))) == NULL) {
		s1->max = 0;
		return -1;
	}
	s2->stk = s1->stk;
	s1->max = max;
	s2->max = max;
	return 0;
}

int PushDouble(IntStack* s, int x) {
	if (s->ptr >= s->max) {
		return -1;
	}
	if (s->sign) {
		s->stk[s->ptr++] = x;
	}
	else {
		s->stk[s->max - s->ptr++ - 1] = x;
	}
	return 0;
}

int PopDouble(IntStack* s, int* x) {
	if (s->ptr <= 0) {
		return -1;
	}
	if (s->sign) {	
		*x = s->stk[--s->ptr];
	}
	else {
		*x = s->stk[s->max - s->ptr--];
	}	
	return 0;
}

int PeekDouble(const IntStack* s, int* x) {
	if (s->ptr <= 0) {
		return -1;
	}
	if (s->sign) {
		*x = s->stk[s->ptr - 1];
	}
	else {
		*x = s->stk[s->max - s->ptr];
	}
	return 0;
}

int SearchDouble(const IntStack* s, int x) {
	int i;
	if (s->sign) {
		for (i = s->ptr - 1; i >= 0; i--) {
			if (x == s->stk[i]) {
				return i;
			}
		}
	}
	else {
		for (i = s->max - s->ptr; i < s->max; i++) {
			if (x == s->stk[i]) {
				return i;
			}
		}
	}
	
	return -1;
}

void PrintDouble(const IntStack* s) {
	int i;
	if (s->sign) {
		for (i = 0; i < s->ptr; i++) {
			printf("%d ", s->stk[i]);
		}
		putchar('\n');
	}
	else {
		for (i = s->max - 1; i >= s->max - s->ptr; i--) {
			printf("%d ", s->stk[i]);
		}
		putchar('\n');
	}
}