//윤년 프로그램 + 조건 연산자 max_value 추가
#include <stdio.h>

int main(void) {
	int year;
	int result;

	printf("연도를 입력하시오: ");
	scanf_s("%d", &year);

	result = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
	(result > 0) ? printf("윤년\n") : printf("평년\n");

	return 0;
}