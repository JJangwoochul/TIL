#include <stdio.h>

int main(void) {
	int base;
	int height;
	double area;

	printf("�ﰢ���� �غ�:");
	scanf_s("%d", &base);
	printf("�ﰢ���� ����:");
	scanf_s("%d", &height);

	area = 0.5 * base * height;
	printf("�ﰢ���� ����:%lf\n", area);

	return 0;
}