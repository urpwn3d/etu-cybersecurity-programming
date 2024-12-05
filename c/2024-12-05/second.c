#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

#define M 2
#define N 2


int OutMatrix(int** array, size_t m, size_t n)
{
    size_t i, j;
    if (array == NULL) return 1;
    if (m == 0) return 2;
    if (n == 0) return 3;
    for (i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}


int main()
{
    int** array;
    int flag = 0;
    size_t i, j;
    array = malloc(M * sizeof(array[0]));
    if (array == NULL)
    {
        printf("Error!\n");
        return 1;
    }
    for (i = 0; i < M; i++) array[i] = NULL;
    for (i = 0; i < M; i++)
    {
        array[i] = malloc(N * sizeof(array[0][0]));
        if (array[i] == NULL)
        {
            flag = 1;
            break;
        }
    }
    if (flag != 0)
    {
        for (i = 0; i < M; i++) free(array[i]);
        free(array);
    }
    else
    {
        for (i = 0; i < M; i++)
        {
            for (j = 0; j < N; j++)
            {
                scanf("%d", &array[i][j]);
            }
        }

        int Result = OutMatrix(array, M, N);
        if (Result != 0)
        {
            printf("Error!\n");
            return 1;
        }
        for (i = 0; i < M; i++) free(array[i]);
        free(array);
        return 0;
    }
}
