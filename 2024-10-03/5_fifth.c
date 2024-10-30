#include <stdio.h>

int main() {
    unsigned char age;
    scanf("%hhu", &age);
    if ((age > 17) && (age < 31)) {
        printf("The army is waiting you!\n");
    }
    else {
        printf("You are the lucky one.\n");
    }
    return 0;
}
