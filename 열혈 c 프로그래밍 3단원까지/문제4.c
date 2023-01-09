#include <stdio.h>
int main(void)
{
	int num1, num2;
	int result1, result2;
	printf("두 정수를 입력하시오:");
	scanf_s("%d %d", &num1, &num2);
	result1 = num1 / num2;
	result2 = num1 % num2;
	printf("%d와 %d의 나눗셈 결과 몫:%d이고 나머지:%d입니다.", num1, num2, result1, result2);
	return 0;
}