#include <stdio.h>
#include <stddef.h>

int Division(int divisible, int divider, int* quotient)
{
    if (divider == 0) return 2;
    if (quotient == NULL) return 3;

    *quotient = divisible / divider;

    return 0;
}

int main()
{
    int quotient;
    int Result;
    Result = Division(125, 5, &quotient);
    
    if (Result == 0)
    {
        printf("%d\n", quotient);
    }
    else 
    {
        printf("Error!\n");
    }

    return 0;
}