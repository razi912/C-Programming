#include<stdio.h>
int main(){
    int num,orig,rem,digits=0,result=0;
    printf("Enter a number:");
    scanf("%d",&num);
    orig=num;
    while(orig!=0){
        orig/=10;
        digits++;
    }
    orig=num;
    while(orig!=0){
        rem=orig%10;
        int power=1;
        for(int i=0;i<digits;i++){
            power*=rem;
        }
        result+=power;
        orig/=10;
    }
    if(result==num)
    printf("IT IS AN ARMSTRONG NUMBER");
    else
    printf("IT IS NOT AN ARMSTRONG NUMBER");
    return 0;
}