#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	double F;
	double C;

	printf("화씨값을 입력하시오: ");
	scanf_s("%lf", &F);

	C = (0.5 / 0.9) * (F - 32.0);

	printf("섭씨값은 %lf 입니다.", C);

	return 0;
}