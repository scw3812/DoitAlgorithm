#include <stdio.h>
#include <stdlib.h>

int main2_4(void) {
	int i;
	int* a;
	int na;
	printf("��� ���� :");
	scanf_s("%d", &na);
	a = calloc(na, sizeof(int));

	if (a == NULL) {
		printf("�޸� Ȯ�� ����");
	}
	else {
		printf("%d���� ������ �Է��ϼ���\n", na);
		for (i = 0; i < na; i++) {
			printf("a[%d] : ", i);
			scanf_s("%d", &a[i]);
		}
		printf("�� ��Ұ��� �Ʒ��� �����ϴ�.\n");
		for (i = 0; i < na; i++) {
			printf("a[%d] = %d\n", i, a[i]);
		}
		free(a);
	}

	return 0;
}