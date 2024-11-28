#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main() 
{
    size_t i, j;
    int* a;
    int** b;
    int flag = 0;
    size_t M, N;

    scanf("%zu%zu", &M, &N);
    printf("\n");

    a = malloc(M * sizeof(a[0]));
    if (a == NULL) 
    {
        printf("Error!\n");
        return 1;
    }

    for (i = 0; i < M; i++) 
    {
        scanf("%d", &a[i]);
    }
    free(a);

    printf("\n");

    b = malloc(M * sizeof(b[0]));
    if (b == NULL) 
    {
        printf("Error!\n");
        return 2;
    }

    for (i = 0; i < M; i++) 
    {
        b[i] = NULL;
    }
    for (i = 0; i < M; i++) 
    {
        b[i] = malloc(N * sizeof(b[0][0]));
        if (b[i] == NULL) 
        {
            flag = 1;
            break;
        }
    }
    if (flag != 0) 
    {
        for (i = 0; i < M; i++) 
        {
            free(b[i]);
        }
        free(b);
    }
    else
    {
        for (i = 0; i < M; i++) 
        {
            for(j = 0; j < N; j++) 
            {
                scanf("%d", &b[i][j]);
            }
        }

        printf("\n");

        for (i = 0; i < M; i++) 
        {
            for(j = 0; j < N; j++) 
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < M; i++)
        {
            free(b[i]);
        }
        free(b);
    }

    return 0;
}

