#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t decimal_number;
    uint32_t remainder;
    scanf("%u", &decimal_number);
    do {
        remainder = decimal_number % 16;
        switch (remainder) {
            case 10:
                printf("A\n");
                break;
            case 11:
                printf("B\n");
                break;
            case 12:
                printf("C\n");
                break;
            case 13:
                printf("D\n");
                break;
            case 14:
                printf("E\n");
                break;
            case 15:
                printf("F\n");
                break;
            default:
                printf("%u\n", remainder);
                break;
        }
        decimal_number /= 16;
    } while (decimal_number > 0);
    return 0;
}
