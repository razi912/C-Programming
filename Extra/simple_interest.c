//Write a C program to calculate Simple Interest and Final Amount.
//Input: Principal (₹), Rate (%), Time (Years)
//Output: Simple Interest and Final Amount
//Example:
//Input:
//1000 5 2
//Output:
//100.00
//1100.00
#include<stdio.h>
int main(){
    int p,r,t;
    float si,a;
    scanf("%d %d %d",&p,&r,&t);
    si=(p*r*t)/100;
    a=p+si;
    printf("%.2f\n%.2f",si,a);
    return 0;
}