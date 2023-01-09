#include <stdio.h>
int main(void)
{
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 & num2;
	int num4 = num1 | num2;
	int num5 = num1 ^ num2;
	int num6 = ~num1;
	printf("AND 연산의 결과:%d \n", num3);
	printf("OR 연산의 결과:%d \n", num4);
	printf("XOR 연산의 결과:%d \n", num5);
	printf("NOT 연산의 결과:%d \n", num6);
	return 0;
}