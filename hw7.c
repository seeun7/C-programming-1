#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
int arr1[6] = { 1,2,3,4,5,6 };
int arr2[6] = { 7,8,9,10,11,12 };
int* ptr1 = &arr1[0];
int* ptr2 = &arr2[0];
int s;
printf("arr1: ");
for (int i = 0; i < 6; i++)
	printf("%d ", arr1[i]);
printf("\n");
printf("arr2: ");
for (int j = 0; j < 6; j++)
	printf("%d ", arr2[j]);
printf("\n\nafter swap\n");
for (int k = 0; k < 6; k++) {
	s = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = s;
	ptr1++;
	ptr2++;
}
printf("arr1: ");
for (int l = 0; l < 6; l++)
	printf("%d ", arr1[l]);
printf("\n");
printf("arr2: ");
for (int m = 0; m < 6; m++)
	printf("%d ", arr2[m]);
return 0;
}