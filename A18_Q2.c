//Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
void rev(char str[]);
int main()
{
   char str[10];
   printf("Enter a string ");
   gets(str);
   rev(str);
}//1 2 3 4 5 6
void rev(char str[])
{
    int i=0,l=0;
    char temp;
    for(l=0;i<str[i];i++)
        for(i=0;i<l/2;i++)
        {
         temp=str[l];
         str[l]=str[l-1-i];
         temp=str[l-1-i];
    }
    printf("%s", str);
}
