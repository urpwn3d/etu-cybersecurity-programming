#include <stdio.h>
#include <stddef.h>

int main() {
    size_t i;
    size_t j;
    unsigned int sum = 0;
    for (i = 1; i < 10000; i++) {
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (i == sum) {
            printf("%zu\n", i);
        }
        sum = 0;
    }
    return 0;
}
