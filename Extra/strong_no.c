#include<stdio.h>
int main(){
    int n,sum=0,fact,orig,rem=0;
    scanf("%d",&n);
    orig=n;
    while(orig!=0){
        rem=orig%10;
        fact=1;
        for(int i=1;i<=rem;i++){
            fact*=i;
        }
        sum+=fact;
        orig/=10;
    }
    if(sum==n)printf("STRONG");
    else printf("NOT STRONG");
    return 0;
}