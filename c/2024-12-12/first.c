#include <stdio.h>
#include <stddef.h>

// the length of an array must be equal, at least, to 2 
int main()
{
    int array[1];
    size_t size = (size_t)(&array[1]) - (size_t)&array[0];
    printf("%zu", size);
    return 0;
}
