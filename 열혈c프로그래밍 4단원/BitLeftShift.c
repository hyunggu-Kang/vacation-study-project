#include <stdio.h>
int main(void)
{
	int num = 15; // 00000000 00000000 00000000 00001111
	int num1 = -16;

	int result1 = num << 1; // 00000000 00000000 00000000 00011110
	int result2 = num << 2; // 00000000 00000000 00000000 00111100
	int result3 = num << 3; // 00000000 00000000 00000000 01111000

	printf("1ĭ ���� �̵� ���:%d\n", result1);
	printf("2ĭ ���� �̵� ���:%d\n", result2);
	printf("3ĭ ���� �̵� ���:%d\n", result3);

	printf("2ĭ ������ �̵� ���:%d\n", num1>>2);
	printf("3ĭ ������ �̵� ���:%d\n", num1>>3);


	return 0;
}