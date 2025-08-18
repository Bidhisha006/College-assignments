// Write a C profram to find the ASCII value of a character taken from the user //

#include <stdio.h>
int main() 
{
    char ch;
	printf("Enter a character: ");
    scanf("%c", &ch);
	printf("The ASCII value of '%c' is %d\n", ch, ch);
	return 0;
}

