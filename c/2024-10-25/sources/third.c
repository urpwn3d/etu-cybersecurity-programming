#include <stdio.h>
#include <stddef.h>

int main() {
    int array[2][2];
    size_t i;
    size_t j;
    int min;
    int max;

    for (i = 0; i < sizeof(array)/sizeof(array[0]); i++) 
    {
        for (j = 0; j < sizeof(array[0])/sizeof(array[0][0]); j++) 
        {
            scanf("%d", &array[i][j]);
        }
    }

    min = array[0][0];
    max = array[0][0];

    for (i = 0; i < sizeof(array)/sizeof(array[0]); i++) 
    {
        for (j = 0; j < sizeof(array[0])/sizeof(array[0][0]); j++) 
        {
            if (array[i][j] < min) 
            {
                min = array[i][j];
            }
            if (array[i][j] > max) 
            {
                max = array[i][j];
            }
        }
    }

    printf("%d %d\n", min, max);
    return 0;
}
