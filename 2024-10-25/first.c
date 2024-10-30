#include <stdio.h>
#include <stddef.h>

int main() {
    int array[5];
    size_t i;
    for (i = 0; i < (sizeof(array)/sizeof(array[0])); i++) {
        scanf("%d", &array[i]);
    }
    
    for (i = 0; i < (sizeof(array)/sizeof(array[0])); i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
