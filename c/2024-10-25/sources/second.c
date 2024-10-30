#include <stdio.h>
#include <stddef.h>

int main() {
    int array[5];
    size_t i;
    int min;
    int max;

    for (i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        scanf("%d", &array[i]);
    }
    
    min = array[0];
    max = array[0];

    for (i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        if (array[i] < min) {
            min = array[i];
        }

        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("%d\n", min);
    printf("%d\n", max);

    return 0;
}
