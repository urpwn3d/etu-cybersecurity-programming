#include <stdio.h>

int main() 
{
    int a;
    int* b;
    b = &a;
    *b = 10;
    printf("%d\n", *b);

    return 0;
}
