//Write a program to calculate simple interest

#include <stdio.h>
int main()
{
	float p,t,r,s;
	printf("Enter the principal value: ");
	scanf("%f",&p);
	printf("Enter the rate of interest: ");
	scanf("%f",&r);
	printf("Enter the time: ");
	scanf("%f",&t);
	
	s = (p*t*r)/100;
	
	printf("Simple Interest: %f", s);
	return 0;
}
