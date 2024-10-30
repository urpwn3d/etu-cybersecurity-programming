#include <stdio.h>
#include <stddef.h>

int main() {
    unsigned char number;
    do {
        scanf("%hhu", &number);
    } while ((number < 1) || (number > 4));
    return 0;
}
