#include <stdio.h>
int main(void)
{
	int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3;
	num2 *= 4;
	num3 %= 5;
	printf("Result: %d,%d,%d\n", num1, num2, num3);

	int num5 = +2;
	int num4= -4;
	num5 = -num5;
	printf("num5:%d \n", num5);
	num4 = -num4;
	printf("num4:%d \n", num4);

	return 0;
}