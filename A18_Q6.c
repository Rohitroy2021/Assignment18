//Write a function to check whether a given string is an alphanumeric string or not.
// C code to illustrate isalphanum()
#include <ctype.h>
#include <stdio.h>

int main()
{
	char ch = 'a';

	// checking is it alphanumeric or not?
	if (isalnum(ch))
		printf("\nEntered character is alphanumeric\n");
	else
		printf("\nEntered character is not alphanumeric\n");
}
