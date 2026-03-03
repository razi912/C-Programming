/*Write a C program to calculate the total bill in a grocery store.
Input:
Price per kilogram and Quantity in kilograms
Output:
Total bill amount
Example:
Input:
50 3
Output:
150
*/
#include<stdio.h>
int main(){
    int p,q;
    scanf("%d %d",&p,&q);
    printf("%d",p*q);
    return 0;
}