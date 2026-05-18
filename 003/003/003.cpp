#include <stdio.h>
int main(void)
{
	const int WIDTH = 60; // 폭
	const int HETGHT = 80; // 높이

	int triangleArea = (WIDTH * HETGHT) / 2; // 삼각형의 면적을 구하는 공식
	int rectangleArea = WIDTH * HETGHT;		// 사각형의 면적을 구하는 공식

	printf("%d, %d"), triangleArea, rectangleArea;
}