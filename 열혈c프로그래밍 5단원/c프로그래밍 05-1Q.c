#include <stdio.h>
int main(void)
{
	int x1, y1;
	int x2, y2;
	int area;

	printf("좌 하단의 x,y 좌표값을 입력하세요:");
	scanf_s("%d %d", &x1, &y1);
	printf("우 상단의 x,y, 좌표값을 입력하세요:");
	scanf_s("%d %d", &x2, &y2);
	area = (x2 - x1) * (y2 - y1);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.", area);
	return 0;

}