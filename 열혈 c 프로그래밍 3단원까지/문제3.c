#include <stdio.h>
int main(void)
{
	int num1;
	int result;
	printf("�ϳ��� ������ �Է��Ͻÿ�:");
	scanf_s("%d", &num1);
	result = num1 * num1;
	printf("%d�� ������ %d�Դϴ�.", num1, result);
	return 0;
}