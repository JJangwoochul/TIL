#include <stdio.h>

int main(void) {
	double weight_on_earth;
	double weight_on_moon;

	printf("�����Ը� �Է��Ͻÿ�:");
	scanf_s("%lf", &weight_on_earth);

	weight_on_moon = weight_on_earth * 0.17;

	printf("�޿����� �����Դ� %lf kg�Դϴ�.\n", weight_on_moon);

	return 0;
}