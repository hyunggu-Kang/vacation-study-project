#include <stdio.h>
int main(void)
{
	int x1, y1;
	int x2, y2;
	int area;

	printf("�� �ϴ��� x,y ��ǥ���� �Է��ϼ���:");
	scanf_s("%d %d", &x1, &y1);
	printf("�� ����� x,y, ��ǥ���� �Է��ϼ���:");
	scanf_s("%d %d", &x2, &y2);
	area = (x2 - x1) * (y2 - y1);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.", area);
	return 0;

}