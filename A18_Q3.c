//Write a function to compare two strings.
#include<stdio.h>
#include<string.h>
void cmp(char str[],char str2[]);
int main()
{
   char str[10];
   char str2[10];
   printf("Enter str\n");
   gets(str);
   printf("Enter str2\n");
   gets(str2);
   cmp(str,str2);


}//1 2 3 4 5 6
void cmp(char str[],char str2[])
{
    int r;
   strcmp(str,str2);
   if(r==0)
    printf("string is equal");
   else
    printf("string is not equal");
}
