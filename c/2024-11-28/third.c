#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int printDynamicMassive(int* array, size_t array_size)
{
    size_t j;
    for (j = 0; j < array_size; j++)
    {
        printf("%d ", array[j]);
    }

    return 0;
}

int main() 
{
    size_t i;
    int* a;
    int flag = 0;
    size_t M;

    scanf("%zu", &M);
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

    printDynamicMassive(a, M);
    free(a);

    return 0;
}
