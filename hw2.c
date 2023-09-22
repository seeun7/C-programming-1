#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float km;
	printf("Please enter kilometers:");
	scanf("%f", &km);
	float miles;
	miles = km / 1.609;
	printf("%.1fkm is equal to %.1f miles.\n", km, miles);


	return 0;
}