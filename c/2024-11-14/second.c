#include <stdio.h>
#include <string.h>
#include <stddef.h>


int Out (const char* string)
{
    size_t i;
    size_t string_length;
    string_length = strlen(string);
    for (i = string_length; i > 0; i--)
    {
        printf("%c", string[i - 1]);
    }

    return 0;
}


int main()
{
    char string[100];
    scanf("%[^\n]", string);
    Out(string);
    return 0;
}
