#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double radius;
	double area;

	printf("반지름을 입력하시요: ");
	scanf("%lf", &radius);
	area = 3.14 * radius * radius;
	printf("원의 면적: %lf\n", area);

	return 0;
}