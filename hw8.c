#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double dev(int* ptr) {
	int v, s, total1 = 0, total2 = 0;
	double p[5]; //ÆíÂ÷Á¦°ö 
	double e, deviation;
	for (int j = 0; j < 5; j++)
		total1 += ptr[j];
	e = total1 / 5;
	for (int k = 0; k < 5; k++)
		p[k] = pow(ptr[k] - e, 2);
	for (int i = 0; i < 5; i++)
		total2 += p[i];
	v = total2 / 5;
	deviation = sqrt(v);
	printf("Standard Deviation: %.3lf", deviation);
}
int main(void)
{
	int arr[5];
	printf("Enter 5 real number:");
	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	dev(arr);
	return 0;
}