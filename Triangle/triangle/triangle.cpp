
#include<stdio.h>

void Triangle(int number);
void InverseTriangle(int number);
void Diamond(int number);
void ForFun(int opt);

int main(void)
{
	char q1[] = "타입을 고르시오 1.정삼각형 2. 역삼각형 3.마름모 \n";
	char q2[] = "몇 층으로 만들어 드릴까요? (3이상 10이하의 정수 입력)\n";
	int type;
	int num;

	printf("%s", q1);
	scanf_s("%d", &type); // scanf랑 scanf_s차이가 뭐지? 그냥 scanf으로 했을 때에는 경고 나옴


	if (type > 0 && type < 4)
	{
		printf("%s", q2);
		scanf_s("%d", &num);

		if (num > 2 && num < 11)
		{
			switch (type)
			{
			case 1:
				Triangle(num);
				break;
			case 2:
				InverseTriangle(num);
				break;
			case 3:
				Diamond(num);
				break;
			}

			int option;

			printf("제가 뭐 하나 더 보여드릴까요?? \n 1.Yes 2. No \n");
			scanf_s("%d", &option);

			if (option == 1)
			{
				int i, j;

				for (i = 1; i < 11; i++)
					for (j = 0;j <= i;j++)
						if (j < i)
							printf("*");
						else
							printf("\n");

				printf("쨘~~☆");
			}

			else
			{
				printf("정말 너무하시네요.. 성의를 무시할 수 없습니다 \n");
				ForFun(option);
			}


		}
		else
		{
			printf("3이상 10이하의 정수를 입력하라니까..!!!!!!! \n");
		}
	}
	else
	{
		printf("제발 정해진 선택지 내에서 골라주세요... \n");
	}

	return 0;
}



void Triangle(int number) //int나 char 썼을 때는 안 돌아갔는데 void 쓰니까 돌아갔음
{
	for (int floor = 1; floor < number + 1; floor++)
	{
		for (int blank = 1; blank <= number - floor; blank++)
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
}

void InverseTriangle(int number)
{
	for (int floor = number; floor > 0; floor--)
	{
		for (int blank = 1; blank <= number - floor; blank++)
		{
			printf(" "); //printf 나 scanf_s 뒤의 (괄호)에서 왜 _Format: 이 자꾸 뜨는 거지?
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
}

void Diamond(int number)
{
	if (number % 2 == 0)
	{
		number -= 1;
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
}

void ForFun(int opt) //함수 선언할 때 매개변수로 이미 int opt하니까 그 함수 정의하는 과정에서 int opt; 못 쓰네..
{
	printf("제가 뭐 하나 더 보여드릴까요?? \n 1.Yes 2. No \n");
	scanf_s("%d", &opt);
	if (opt == 1)
	{
		int i, j;

		for (i = 1; i < 11; i++)
			for (j = 0;j <= i;j++)
				if (j < i)
					printf("*");
				else
					printf("\n");

		printf("쨘~~☆");
	}
	else
	{
		printf("정말 너무하시네요.. 성의를 무시할 수 없습니다 \n");
		ForFun(opt);
	}
}


