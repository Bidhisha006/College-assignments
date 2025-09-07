#include <stdio.h>

int main() {
    char toss;

    printf("Enter H for Head or T for Tail: ");
    scanf(" %c", &toss);  

    if (toss == 'H' || toss == 'h') {
        printf("It is Head.\n");
    }
    if (toss == 'T' || toss == 't') {
        printf("It is Tail.\n");
    }
    if (toss != 'H' && toss != 'h' && toss != 'T' && toss != 't') {
        printf("Invalid input. Please enter H or T.\n");
    }

    return 0;
}
