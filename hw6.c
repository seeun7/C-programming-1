#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int len = 0;
    int arr[5];
    printf("Please input five numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Odd numbers:");
    for (int k = 0; k < 5; k++) {
        if (arr[k] % 2 != 0)
            printf("%d ", arr[k]);
    }
    printf("\n");
    printf("Even numbers:");
    for (int j = 0; j < 5; j++) {
        if (arr[j] % 2 == 0)
            printf("%d ", arr[j]);
    }

    return 0;
}