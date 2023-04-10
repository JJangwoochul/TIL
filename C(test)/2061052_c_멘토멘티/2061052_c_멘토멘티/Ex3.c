#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int height;
	int base;
	double area;

	printf("»ï°¢ÇüÀÇ ¹Øº¯: ");
	scanf_s("%d", &base);

	printf("»ï°¢ÇüÀÇ ³ôÀÌ: ");
	scanf_s("%d", &height);

	area = 0.5 * height * base;

	printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %lf", area);

	return 0;
}