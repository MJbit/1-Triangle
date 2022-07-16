
#include<stdio.h>

void Triangle(int number);
void InverseTriangle(int number);
void Diamond(int number);
void ForFun(int opt);

int main(void)
{
	char q1[] = "Ÿ���� ���ÿ� 1.���ﰢ�� 2. ���ﰢ�� 3.������ \n";
	char q2[] = "�� ������ ����� �帱���? (3�̻� 10������ ���� �Է�)\n";
	int type;
	int num;

	printf("%s", q1);
	scanf_s("%d", &type); // scanf�� scanf_s���̰� ����? �׳� scanf���� ���� ������ ��� ����


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

			printf("���� �� �ϳ� �� �����帱���?? \n 1.Yes 2. No \n");
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

				printf("º~~��");
			}

			else
			{
				printf("���� �ʹ��Ͻó׿�.. ���Ǹ� ������ �� �����ϴ� \n");
				ForFun(option);
			}


		}
		else
		{
			printf("3�̻� 10������ ������ �Է��϶�ϱ�..!!!!!!! \n");
		}
	}
	else
	{
		printf("���� ������ ������ ������ ����ּ���... \n");
	}

	return 0;
}



void Triangle(int number) //int�� char ���� ���� �� ���ư��µ� void ���ϱ� ���ư���
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
			printf(" "); //printf �� scanf_s ���� (��ȣ)���� �� _Format: �� �ڲ� �ߴ� ����?
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
}

void ForFun(int opt) //�Լ� ������ �� �Ű������� �̹� int opt�ϴϱ� �� �Լ� �����ϴ� �������� int opt; �� ����..
{
	printf("���� �� �ϳ� �� �����帱���?? \n 1.Yes 2. No \n");
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

		printf("º~~��");
	}
	else
	{
		printf("���� �ʹ��Ͻó׿�.. ���Ǹ� ������ �� �����ϴ� \n");
		ForFun(opt);
	}
}


