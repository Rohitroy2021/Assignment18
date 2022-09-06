//Write a function to count words in a given string
#include<stdio.h>
int main()
{
   char c[10];
   printf("Enter a string");
   gets(c);
   printf("No of words is %d",count_string(c));
}
int count_string(char c[])
{
    int count=0;
    for(int i=0;c[i];i++)
    {
    count++;
}
return count;
}
