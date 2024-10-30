#include <stdio.h>

int main() {
    unsigned char age;
    scanf("%hhu", &age);
    if ((age < 18) || (age > 30)) {
        printf("You are the lucky one.\n");
    }
    else {
        printf("Welcome to the army.\n");
    }
    return 0;
}
