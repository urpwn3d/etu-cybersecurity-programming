#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main()
{
    int*** array;
    int flag_1, flag_2 = 0;
    size_t i, j, k;
    size_t first_dimension, second_dimension, third_dimension;
    scanf("%zu%zu%zu", &first_dimension, &second_dimension, &third_dimension);

    array = malloc(sizeof(array[0]));
    for (i = 0; i < first_dimension; i++)
    {
        array[i] = NULL;
    }
    for (i = 0; i < first_dimension; i++)
    {
        array[i] = malloc(first_dimension * sizeof(array[0][0]));
        if (array[i] == NULL)
        {
            flag_1 = 1;
            break;
        }
    }

    if (flag_1 != 0)
    {
        for (i = 0; i < first_dimension; i++)
        {
            free(array[i]);
        }
        free(array);
    }
    else
    {
        for (i = 0; i < first_dimension; i++)
        {
            for (j = 0; j < second_dimension; j++)
            {
                array[i][j] = NULL;
            }
        }
        for (i = 0; i < first_dimension; i++)
        {
            for (j = 0; j < second_dimension; j++)
            {
                array[i][j] = malloc(second_dimension * sizeof(array[0][0][0]));
                if (array[i][j] == NULL)
                {
                    flag_2 = 1;
                    break;
                }
            }
        }
        if (flag_2 != 0)
        {
            for (i = 0; i < first_dimension; i++)
            {
                for (j = 0; j < second_dimension; j++)
                {
                    free(array[i][j]);
                }
            }
            for (i = 0; i < first_dimension; i++)
            {
                free(array[i]);
            }
            free(array);
        }
        else 
        {
            for (i = 0; i < first_dimension; i++)
            {
                for (j = 0; j < second_dimension; j++)
                {
                    for (k = 0; k < third_dimension; k++)
                    {
                        scanf("%d", &array[i][j][k]);
                    }
                }
            }
            for (i = 0; i < first_dimension; i++)
            {
                for (j = 0; j < second_dimension; j++)
                {
                    free(array[i][j]);
                }
            }
            for (i = 0; i < first_dimension; i++)
            {
                free(array[i]);
            }
            free(array);
        }
    }

    return 0;
}
