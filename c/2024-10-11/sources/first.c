#include <stdio.h>

int main () {
    int unsigned amount;
    printf("Enter the amount of your balance:\n");
    scanf("%u", &amount);
    if (amount) printf("Welcome!\n");
    else printf("Bye-bye!");
    return 0;
}
