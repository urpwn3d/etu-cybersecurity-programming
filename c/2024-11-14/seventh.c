#include <signal.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

int main()
{
    char string[100];
    size_t string_length;
    size_t i;
    size_t flag = 1;
    scanf("%[^\n]", string);
    string_length = strlen(string);
    
    for (i = 0; i < string_length / 2; i++)
    {
        if (string[i] != string[(string_length - 1) - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("This word is palindrome.\n");
    }
    else 
    {
        printf("This word is not a palindrome.\n");
    }
    
    return 0;
}
