#include <stdio.h>

int main(void) {
	int base;
	int height;
	double area;

	printf("»ï°¢ÇüÀÇ ¹Øº¯:");
	scanf_s("%d", &base);
	printf("»ï°¢ÇüÀÇ ³ôÀÌ:");
	scanf_s("%d", &height);

	area = 0.5 * base * height;
	printf("»ï°¢ÇüÀÇ ³ĞÀÌ:%lf\n", area);

	return 0;
}