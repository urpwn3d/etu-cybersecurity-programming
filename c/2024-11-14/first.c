#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main()
{
    char string[100];
    size_t string_length;
    size_t i;
    scanf("%[^\n]", string);
    string_length = strlen(string);
    for (i = string_length; i > 0; i--)
    {
        printf("%c", string[i - 1]);
    }
    return 0;
}
