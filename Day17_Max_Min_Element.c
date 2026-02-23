/*Problem: Write a program to find the maximum and minimum values present in a given array of integers*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    free(arr);

    return 0;

}
