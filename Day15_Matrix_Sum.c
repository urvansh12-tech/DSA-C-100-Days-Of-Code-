/*Problem: Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int **matrix = (int **)malloc(m * sizeof(int *));
    for(int i = 0; i < m; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    int limit = (m < n) ? m : n;

    for(int i = 0; i < limit; i++) {
        sum += matrix[i][i];
    }

    printf("%d", sum);

    for(int i = 0; i < m; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;

}
