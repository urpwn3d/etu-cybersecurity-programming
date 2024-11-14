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
        if ((string[i] > ('a' - 1)) && (string[i] < ('z' + 1)))
        {
            printf("%c", string[i] + ('A' - 'a'));
        } 
        else 
        {
            printf("%c", string[i]);
        }
    }

    printf("\n");

    for (i = 0; i < string_length; i++)
    {
        if ((string[i] > ('A' - 1)) && (string[i] < ('Z' + 1)))
        {
            printf("%c", string[i] - ('A' - 'a'));
        } 
        else 
        {
            printf("%c", string[i]);
        }
    }
}
