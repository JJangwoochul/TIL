//���� ���α׷� + ���� ������ max_value �߰�
#include <stdio.h>

int main(void) {
	int year;
	int result;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &year);

	result = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
	(result > 0) ? printf("����\n") : printf("���\n");

	return 0;
}