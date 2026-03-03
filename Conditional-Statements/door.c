#include<stdio.h>
int main(){
    int doorcode;
    scanf("%d",&doorcode);
    if(doorcode==889){
        printf("Correct code.\nThe door is now open");
    }
    else{
        printf("Wronng code. \nThe door remains closed.");
    }
    return 0;
}    