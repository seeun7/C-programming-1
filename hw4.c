#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num1, num2;
	printf("please enter a number: ");
	scanf("%d", &num1);
	for (num2 = num1 - 1; num2 >= 2; num2--)
	{
		if (num1 % num2 != 0)
		{
			if (num2 == 2)
			{
				printf("It is a prime number. \n");
			}
		}
		if (num1 % num2 == 0)
		{
			printf("It is not a prime number. \n");
			break;
		}
	}
	return 0;
}