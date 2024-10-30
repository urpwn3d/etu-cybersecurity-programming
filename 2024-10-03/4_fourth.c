#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    if ((number % 2) == 0) {
        printf("The number is even.\n");
        printf("The number is equal to %d.\n", number);
    }
    else {
        printf("The number is not even.\n");
        printf("The number is equal to %d.\n", number);
    }
}
