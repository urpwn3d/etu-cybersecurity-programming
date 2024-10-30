#include <stdio.h>

int main() {
    int unsigned amount;
    scanf("%u", &amount);
    if (!amount) printf("Bye-bye!");
    else printf("Welcome!");
    return 0;
}
