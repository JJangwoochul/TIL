#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	double F;
	double C;

	printf("ȭ������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &F);

	C = (0.5 / 0.9) * (F - 32.0);

	printf("�������� %lf �Դϴ�.", C);

	return 0;
}