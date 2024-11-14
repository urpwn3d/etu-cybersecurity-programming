#include <stdio.h>
#include <stddef.h>
#include <string.h>

int main()
{
    char string[100];
    size_t string_length;
    size_t i;
    scanf("%[^\n]", string);
    string_length = strlen(string);
    for (i = 0; i < string_length; i++)
    {
        printf("%c", string[i] ^ ('a' - 'A'));
    }
}
