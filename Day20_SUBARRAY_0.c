/*Problem: Given an array of integers, count the number of subarrays whose sum is equal to zero*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int size = 2 * n + 1;
    int *freq = (int *)calloc(size, sizeof(int));

    int sum = 0, count = 0;
    freq[n] = 1;   // sum = 0 mapped to index n

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        count += freq[sum + n];
        freq[sum + n]++;
    }

    printf("%d", count);

    free(arr);
    free(freq);
    return 0;

}
