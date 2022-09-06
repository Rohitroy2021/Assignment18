//Write a function to transform a string into lowercase
void lwrrcase(char str[]);
int main()
{
   char str[10];
   //char str2[10];
   printf("Enter str\n");
   gets(str);
   //printf("Enter str2\n");
   //gets(str2);
   lwrcase(str);


}//1 2 3 4 5 6
void lwrcase(char str[])
{
    int r;
   strlwr(str);

    printf("%s",str);
}
