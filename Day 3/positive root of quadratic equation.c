#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root;

   printf("Enter coefficients (a, b, c) of ax^2 + bx + c = 0\n"); 
   printf("Enter a: ");
   scanf("%f", &a);
   printf("Enter b: ");
   scanf("%f", &b); 
   printf("Enter c: ");
   scanf("%f", &c);
   
   discriminant = b*b - 4*a*c;
   
   root = (-b + sqrt(fabs(discriminant))) / (2*a);
   
   printf("Positive root = %.2f\n", root);

    return 0;
}

