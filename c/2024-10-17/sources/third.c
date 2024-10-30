#include <stdio.h>
#include <stddef.h>

int main() {
    size_t i;
    size_t j;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if ((i % 2 == 0) && (j % 2 == 1)) {
                printf("%zu %zu\n", i, j);
            }
        }
    }
    return 0;
}
