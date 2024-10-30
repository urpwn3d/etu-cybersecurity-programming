#include <stdio.h>
#include <stddef.h>

int main()
{
    int array_a[2][2];
    int array_b[2][2];
    int array_c[2][2];
    size_t i;
    size_t j;

    for (i = 0; i < sizeof(array_a)/sizeof(array_a[0]); i++)
    {
        for (j = 0; j < sizeof(array_a[0])/sizeof(array_a[0][0]); j++)
        {
            scanf("%d", &array_a[i][j]);
        }
    }

    for (i = 0; i < sizeof(array_b)/sizeof(array_b[0]); i++)
    {
        for (j = 0; j < sizeof(array_b[0])/sizeof(array_b[0][0]); j++)
        {
            scanf("%d", &array_b[i][j]);
        }
    }
    for (i = 0; i < sizeof(array_c)/sizeof(array_c[0]); i++)
    {
        for (j = 0; j < sizeof(array_c[0])/sizeof(array_c[0][0]); j++)
        {
            array_c[i][j] = array_a[i][j] * array_b[i][j] + array_a[i][j + 1] * array_b[i][j + 1];
        }
    }
    
    for (i = 0; i < sizeof(array_c)/sizeof(array_c[0]); i++)
    {
        for (j = 0; j < sizeof(array_c[0])/sizeof(array_c[0][0]); j++)
        {
            printf("%d ", array_c[i][j]);
        }
        printf("\n");
    }
}
