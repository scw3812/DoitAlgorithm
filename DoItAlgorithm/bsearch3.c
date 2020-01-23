#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[10];
	int height;
	int weight;
} Person;

int npcmp(const Person* x, const Person* y) {
	return strcmp(x->name, y->name);
}

int main3_7(void) {
	Person x[] = {
		{"�迵��", 179, 79},
		{"������", 174, 63},
		{"�̼���", 169, 53},
		{"�ֵ���", 181, 65},
		{"������", 165, 43},
		{"ȫ����", 172, 51}
	};
	int nx = sizeof(x) / sizeof(x[0]);
	int retry;
	puts("�̸����� �˻��մϴ�.");
	do {
		Person temp, * p;
		printf("�̸� : ");
		scanf_s("%s", temp.name, 10);
		p = bsearch(&temp, x, nx, sizeof(Person),
			(int(*)(const void*, const void*))npcmp);
		if (p == NULL) {
			puts("�˻��� �����߽��ϴ�.");
		}
		else {
			puts("�˻� ����!! �Ʒ� ��Ҹ� ã�ҽ��ϴ�.");
			printf("x[%d] : %s %dcm %dkg\n", (int)(p - x), p->name, p->height, p->weight);
		}
		printf("�ٽ� �˻��ұ��?(1) ��/ (0) �ƴϿ� : ");
		scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;

}