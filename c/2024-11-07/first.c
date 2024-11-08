#include <stdio.h>

int main()
{
    char string[100];
    scanf("%[^\n]", string);
    printf("%s\n", string);
    return 0;
}
