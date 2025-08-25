#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    printf("Floor value of %f = %f\n", num, floor(num));
    printf("Ceiling value of %f = %f\n", num, ceil(num));

    return 0;
}

