#include <stdio.h>

int main(void)
{	
	/* 기본형 타입이름
	* char		문자를 의미하는 영단어 'char'acter
	* int			정수를 의미하는 영단어 'int'eger
	* short		int보다 길이가 짧아서 short
	* long		int보다 길이가 길어서 long
	* float		부동수소점('float'ing-point)
	* double	정밀도(precision) float보다 약 두 배라서 double
	*/
	
	int i = 100;

	printf("sizeof i							=%d bytes\n"), sizeof i;
	printf("sizeof (char)					=%d bytes\n"), sizeof(char);
	printf("sizeof (short)					=%d bytes\n"), sizeof(short);
	printf("sizeof (int)						=%d bytes\n"), sizeof(int);
	printf("sizeof (long)					=%d bytes\n"), sizeof(long);
	printf("sizeof (long long)			=%d bytes\n"), sizeof(long long);
	printf("sizeof (float)					=%d bytes\n"), sizeof(float);
	printf("sizeof(double)				=%d bytes\n"), sizeof(double);
	printf("sizeof(long double)		=%d bytes\n"), sizeof(long double);

	return 0;
}