#include <stdio.h>
#include <stddef.h>


int OutMatrix(int array[][2], size_t m, size_t n)
{
    size_t i, j;
    if (array == NULL) return 1;
    if (m == 0) return 2;
    if (n == 0) return 3;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}


int main()
{
    int array[2][2];
    size_t m, n;
    size_t i, j;
    m = sizeof(array)/sizeof(array[0]);
    n = sizeof(array[0])/sizeof(array[0][0]);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    int Result = OutMatrix(array, m, n);
    if (Result != 0)
    {
        printf("Error!\n");
        return 1;
    }
    return 0;
}
