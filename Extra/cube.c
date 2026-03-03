#include<stdio.h>
int main()
{
   int a;                                        //take a integer value a
   printf("enter a number:\n");                  //asking for a number
   scanf("%d",&a);                               //storing the value of integer
   printf("cube of number is %d\n", a*a*a);      //printing the cube of number
   return 0;
}