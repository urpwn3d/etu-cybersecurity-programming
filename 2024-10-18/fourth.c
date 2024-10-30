#include <stdio.h>

int main() {
    unsigned int number;
    unsigned int reversed = 0;
    unsigned int original;

    scanf("%u", &number);
    original = number;

    do {
        reversed = (reversed * 10) + (number % 10);
        number /= 10;
    } while (number > 0);

    if (reversed == original) {
        printf("This number is a palindrome.\n");
        return 0;
    }

    printf("This number is not a palindrome.\n");
    return 0;
}
