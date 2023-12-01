#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct city {
    char name[20];
    char country[20];
    int pop;
} City;
int main(void) {
    struct city arr[3];
    printf("input three cities\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0';
        printf("Country: ");
        fgets(arr[i].country, sizeof(arr[i].country), stdin);
        arr[i].country[strcspn(arr[i].country, "\n")] = '\0';
        printf("Population: ");
        scanf("%d", &arr[i].pop);
        getchar();
    }

    printf("Printing the three cities:\n");
    for (int j = 0; j < 3; j++) {
        printf("%d. %s in %s with a population of %d people\n", j + 1, arr[j].name, arr[j].country, arr[j].pop);
    }

    return 0;
}
