/*
Write a C program to display cinema ticket price based on age.
Rules:
Age < 5 → Free
Age 5–12 → ₹50
Age 13–59 → ₹100
Age ≥ 60 → ₹70
Example:
Input:
10
Output:
50
Input:
3
Output:
Free
*/
#include<stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    if(age<5)printf("Free");
    else if(age>=5&&age<=12)printf("50"); 
    else if(age>=13&&age<=59)printf("100"); 
    else if(age>=60)printf("70"); 
    else printf("Invalid");
    return 0;
}