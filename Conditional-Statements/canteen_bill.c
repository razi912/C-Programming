/*
Write a C program for a Canteen Billing System.
Menu:
1 Tea - ₹10
2 Coffee - ₹20
3 Sandwich - ₹50
4 Burger - ₹80
5 Pizza - ₹120
Input: Item code and quantity
Output: Quantity and total bill
Example:
Input:
2 3
Output:
3
60.00
Input:
6 2
Output:
Invalid
*/
#include<stdio.h>
int main(){
    int item,q;
    float bill;
    scanf("%d %d",&item,&q);
    switch(item){
        case 1:bill=q*10;break;
        case 2:bill=q*20;break;
        case 3:bill=q*50;break;
        case 4:bill=q*80;break;
        case 5:bill=q*120;break;
        default:printf("Invalid");break;
}
    printf("%d\n%.2f",q,bill);
return 0;
}