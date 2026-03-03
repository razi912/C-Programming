#include<stdio.h>
int main()
{
   int a,b;                                          //taking integers a and b
   printf("enter sides of rectangle:\n");            //asking for sides
   scanf("%d %d",&a, &b);                            //storing integer
   printf("perimeter of rectangle is %d\n", 2*(a+b));//printing the perimeter
   return 0;
}