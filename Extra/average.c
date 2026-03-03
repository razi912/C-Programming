#include<stdio.h>
int main()
{
   float a,b,c;                                        
   printf("enter three numbers:\n");                  
   scanf("%f %f %f",&a, &b, &c);                               
   printf("average of number is %.2f\n",(a+b+c)/2 );      
   return 0;
}