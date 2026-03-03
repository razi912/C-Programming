#include<stdio.h>
int main()
{
    int marks;

    printf("enter marks:\n");
    scanf("%d",&marks);
    printf("grade is:\n");
    
    if(marks<30)
    {printf("C");}
    
    else if(marks>=30 && marks<70)
    {printf("B");}
    
    else if(marks>=70 && marks<90)
    {printf("A");}
    
    else if(marks>=90 && marks<=100)
    {printf("A+");}
    
    else
    {printf("invalid marks");}

    return 0;
}