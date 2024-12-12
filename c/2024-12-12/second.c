#include <stdio.h>
#include <stddef.h>

int main()
{
    char string[100];
    size_t i;
    int result = 0;
    scanf("%[^\n]", string);
    for (i = 0; string[i] != '\0'; i++)
    {
        result *= 10;
        result = result + (int)(string[i] - ('1' - 1));
    }
    printf("%d\n", result);
    return 0;
}
