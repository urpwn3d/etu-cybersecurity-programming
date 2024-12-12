#include <stdio.h>
#include <stddef.h>

int main()
{
    int array[1];
    size_t size = (size_t)(&array[1]) - (size_t)&array[0];
    printf("%zu", size);
}
