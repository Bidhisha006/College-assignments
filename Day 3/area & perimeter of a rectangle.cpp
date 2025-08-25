#include <stdio.h>
int main()
{
	int a,b,area,peri;
	printf("Enter the length of a rectangle: ");
	scanf("%d", &a);
	printf("Enter the breadth of a rectangle: ");
	scanf("%d", &b);
	
	area = a*b;
	peri =2*(a+b);
	
	printf("Area of the rectangle is %d\n", area);
	printf("Perimeter of the rectangle is %d\n", peri);
	
	return 0;
	
}
