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
    int returned_value;
    returned_value = Division(125, 5, &quotient);
    
    if (returned_value == 0)
    {
        printf("%d\n", quotient);
    }
    else 
    {
        printf("Error!\n");
        return 1;
    }

    return 0;
}
