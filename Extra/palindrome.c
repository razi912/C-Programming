#include<stdio.h>
int main(){
    int num,orig,rem,reverse=0;
    printf("enter number:");
    scanf("%d",&num);
    orig=num;
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }
    if(orig==reverse)
    printf("PALINDROME");
    else
    printf("NOT A PALINDROME");
    return 0;
}