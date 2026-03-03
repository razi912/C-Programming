/*Write a C program to calculate the sum of natural numbers from 1 to n.
Example:
Input:
5
Output:
15
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);
}