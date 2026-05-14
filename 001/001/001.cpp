#include <stdio.h>

int main(void) /* 프로그램 시작 */
{
	int age = 14, year;  // 변수 age를 선언하고 14로 초기화, 변수 year 선언
	year = age + 2000;			// 변수 age에 2000을 더해서 year에 저장
	printf("year:%d\n", year);	// 변수 year의 값을 화면에 출력

	printf("age:%d\n", age);	// 변수 age의 값을 출력
	printf("year:%d\n", year);	// 변수 year의 값을 출력

	age = age + 1;				// 변수 age에 저장된 값을 1 증가시킨다.
	printf("age:%d year:%d\n", age, year); // 변수 age와 year에 저장된 값을 출력

	return 0; /* 프로그램을 종료한다. */
}