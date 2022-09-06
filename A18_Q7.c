//Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<stdlib.h>
int  palindrome(char str);
int  main()
{
char str[10];
   printf("Enter a string");
   gets(str);
   if(palindrome(str))
   {
       print("Palindrome");
   }
   else
   {
    printf("Not a palindrome");
}
}
int palindrome(char str)
{
    int i,l;
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-1-i]){
           return 0;
    }
return 1;
}
