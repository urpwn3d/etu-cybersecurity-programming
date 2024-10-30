#include <stdio.h>

int main() {
    unsigned int number;
    scanf("%u", &number);
    do {
        printf("%u\n", number % 10);
        number /= 10;
    } while (number != 0);
    return 0;
}
