/*
#include <stdio.h>

int main()
{	
	int number;
	printf("3이상 10이하 number입력 \n");
	scanf_s("%d", &number);
	 
	if (number %2 == 0)
	{
		number-=1;
		printf("입력하신 수는 짝수이므로 마름모를 만들기 위해 %d로 변환하였습니다\n", number);

	}

	int story_triangle = (number + 1) / 2;
	int story_inversetriangle = (number - 1) / 2;


	for (int floor = 1; floor <= story_triangle; floor++)
	{
		for (int blank = 1; blank <= story_triangle - floor; blank++)
		{
			printf(" ");
		}
		for (int star = 1; star <= 2 * floor; star++)
		{
			if (star < 2 * floor)
			{
				printf("*");
			}
			else
			{
				printf("\n");
			}
		}
	}
	for (int floor = story_inversetriangle; floor > 0; floor--)
	{    
		printf(" ");
		for (int blank = 1; blank <= story_inversetriangle - floor; blank++)
		{
			printf(" ");
		}
		for (int star = 1; star <= 2 * floor; star++)
		{
			if (star <= 2 * floor - 1)
			{
				printf("*");
			}
			else
			{
				printf("\n");
			}
		}
	}

	return 0;
}

*/