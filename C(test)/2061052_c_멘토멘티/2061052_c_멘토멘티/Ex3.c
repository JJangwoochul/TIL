#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int height;
	int base;
	double area;

	printf("�ﰢ���� �غ�: ");
	scanf_s("%d", &base);

	printf("�ﰢ���� ����: ");
	scanf_s("%d", &height);

	area = 0.5 * height * base;

	printf("�ﰢ���� ����: %lf", area);

	return 0;
}