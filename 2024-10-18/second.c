#include <stdio.h>

int main() {
    unsigned int number;
    unsigned int sum;
    scanf("%u", &number);
    do {
        sum += number % 10;
        number /= 10;
    }while (number != 0);
    printf("%u", sum);
    return 0;
}
