//Write a function to reverse a string word wise. (For example if the given string is
//“Mysirg Education Services” then the resulting string should be “Services Education
//Mysirg” )
#include<stdio.h>
#include<stdlib.h>
void  reverse_s(char str);
int  main()
{
char str[10];
   printf("Enter a string");
   gets(str);
   reverse_s(str);
}
void reverse_s(char str)
{
    char temp;
    int i,l;
    l=strlen(str);
    for(l=0;i<str[i];i++);
        for(i=0;i<l/2;i++)
        {
        temp=str[l];
        str[l]=str[l-1-i];
        str[l-1-i]=temp;
    }
    }
    printf("%s",str);
}
