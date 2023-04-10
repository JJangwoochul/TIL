#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	double weight_on_moon;
	double weight_on_earth;

	printf("몸무게를 입력하세요: ");
	scanf_s("%lf", &weight_on_earth);

	weight_on_moon = weight_on_earth * 0.17;

	printf("달에서의 몸무게는 %lf kg입니다.\n", weight_on_moon);
	
	return 0;
}