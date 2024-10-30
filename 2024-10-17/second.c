#include <stdio.h>
#include <stddef.h>

int main() {
    size_t i;
    for (i = 11; i > 0; i--) {
        printf("%zu\n", i - 1);
    }
    return 0;
}
