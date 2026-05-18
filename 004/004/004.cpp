#include <stdio.h>

int main()
{

	while (true)
	{
		int num;
		printf("정수를 입력하십시오.\n");
		scanf_s("%d", &num);

		for (int i = 1; i < 21; i++)
		{
			printf("%d X %d = %d\n", num, i, num * i);
		}

	}

	return 0; 
}