#include<stdio.h>
int main(){
   int temperature;
   printf("enter temperature\n");
   scanf("%d",&temperature);
   if(temperature<0){
    printf("ITS FREEZING");}
else if(temperature<20){
    printf("ITS COLD");}
else{
    printf("ITS HOT");}
    return 0;
}    