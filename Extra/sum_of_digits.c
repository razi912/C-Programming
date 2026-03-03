#include<stdio.h>
int main(){
    int num,rem=0,sum=0;
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("sum is %d",sum);
    return 0;
}