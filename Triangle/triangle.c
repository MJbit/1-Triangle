/*
#include <stdio.h>

int main()
{	
	int number;
	printf("3�̻� 10���� number�Է� \n");
	scanf_s("%d", &number);
	 
	if (number %2 == 0)
	{
		number-=1;
		printf("�Է��Ͻ� ���� ¦���̹Ƿ� ������ ����� ���� %d�� ��ȯ�Ͽ����ϴ�\n", number);

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