#include <stdio.h>

int main(void) {
	int x;

	printf("변수 x형의	크기:%d\n", sizeof(x));
	printf("char형의	크기:%d\n", sizeof(char));
	printf("int형의		크기:%d\n", sizeof(int));
	printf("short형의	크기:%d\n", sizeof(short));

	return 0;
}