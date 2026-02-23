/*Problem: Given an array of integers, rotate the array to the right by k positions*/
#include <stdio.h>
int main() {
    int n, k;
    k=k%n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[n], rotated[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}

