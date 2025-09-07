#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    }
    if (num % 2 != 0) {
        printf("%d is Odd.\n", num);
    }

    return 0;
}
