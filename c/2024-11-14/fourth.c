#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t Hash(const char* string)
{
    size_t hash = 0;
    size_t i;
    size_t string_length = strlen(string);
    for (i = 0; i < string_length; i++)
    {
        hash += string[i];
    }

    return hash;
}

int main()
{
    char string[100];
    size_t hash;
    scanf("%[^\n]", string);
    hash = Hash(string);
    if (hash != 565)
    {
        printf("Access denied.\n");
        return 1;
    }
    printf("You're welcome!\n");
    return 0;
}
