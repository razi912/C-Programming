#include<stdio.h>
int main(){
    int age;
    printf("Enter age");
    scanf("%d",&age);
    if(age>18) {
        printf("its an adult");
    }
    else if(age>13 && age<18){
        printf("teenager");
    }
    else {
        printf("child");
    }
    return 0;
}    