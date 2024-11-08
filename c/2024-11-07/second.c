#include <stdio.h>
#include <stddef.h>

int main()
{
    char string[100];
    size_t i;
    scanf("%[^\n]", string);
    for (i = 0; string[i] != '\0'; i++);
    printf("%zu\n", i);
    return 0;
}
