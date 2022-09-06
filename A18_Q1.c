//Write a function to calculate length of the string
#include<stdio.h>
#include<string.h>
void length(char str[]);
int main()
{
   char str[10];
   printf("Enter a string ");
   gets(str);
   length(str);
}
void length(char str[])
{
    printf("%d", strlen(str));
}
