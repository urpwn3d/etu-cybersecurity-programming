#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    if ((number % 2) == 0) printf("The number %d is even.\n", number);
    else printf("The number %d is not even.\n", number);
    return 0;
}
