//Write a function to transform string into uppercase
#include<stdio.h>
#include<string.h>
void upprcase(char str[]);
int main()
{
   char str[10];
   //char str2[10];
   printf("Enter str\n");
   gets(str);
   //printf("Enter str2\n");
   //gets(str2);
   upprcase(str);


}//1 2 3 4 5 6
void upprcase(char str[])
{
    int r;
   strupr(str);

    printf("%s",str);
}
