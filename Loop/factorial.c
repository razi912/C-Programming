//factorial of a number using a for loop
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    long long fact=1;
        for(int i=1;i<=num;i++){
            fact*=i;
        }
    printf("%lld",fact);
    return 0;
}