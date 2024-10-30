#include <stdio.h>

int main() {
    signed int first;
    unsigned short int second;
    signed char third;
    unsigned long int fourth;
    signed long long int fifth;

    scanf("%d", &first);
    printf("signed int: %d\n", first);

    scanf("%hu", &second);
    printf("unsigned short int: %hu\n", second);

    scanf("%hhd", &third);
    printf("signed char: %hhd\n", third);

    scanf("%lu", &fourth);
    printf("unsigned long int: %lu\n", fourth);

    scanf("%lld", &fifth);
    printf("signed long long int: %lld\n", fifth);

    return 0;
}
