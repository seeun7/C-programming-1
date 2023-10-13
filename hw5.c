#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int num;
int BINARY(num)
{
	if (num == 0)
		return;

	BINARY(num / 2);
	printf("%d", num % 2);
}
int main(void)
{	
	printf("please enter number: ");
	scanf("%d", &num);
	BINARY(num);
	return 0;
}