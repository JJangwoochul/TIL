#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	double weight_on_moon;
	double weight_on_earth;

	printf("�����Ը� �Է��ϼ���: ");
	scanf_s("%lf", &weight_on_earth);

	weight_on_moon = weight_on_earth * 0.17;

	printf("�޿����� �����Դ� %lf kg�Դϴ�.\n", weight_on_moon);
	
	return 0;
}