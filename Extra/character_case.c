#include<stdio.h>
int main()
{
    char ch;
    printf("enter character:\n");
    scanf("%c",&ch);
   
    if(ch>='a' && ch<='z')
    {printf("lowercase");}
   
    else if (ch>='A' && ch<='Z')
    {printf("uppercase");}
   
    else
    {printf("invalid");}


    return 0;
}