#include <stdio.h>
int main(void)
{
	int num1 = 12;
	int num2 = 12;
	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++);
	printf("num1: %d \n", num1);
	printf("\n");
	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2);
	printf("num2: %d \n", num2);

	int num3 = 10;
	int num4 = (num3--) + 2;
	printf("num3:%d \n", num3);
	printf("num4:%d \n", num4);
	return 0;

}