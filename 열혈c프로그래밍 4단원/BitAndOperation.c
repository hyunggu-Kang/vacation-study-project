#include <stdio.h>
int main(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 & num2;
	int num4 = num1 | num2;
	int num5 = num1 ^ num2;
	int num6 = ~num1;
	printf("AND ������ ���:%d \n", num3);
	printf("OR ������ ���:%d \n", num4);
	printf("XOR ������ ���:%d \n", num5);
	printf("NOT ������ ���:%d \n", num6);
	return 0;
}