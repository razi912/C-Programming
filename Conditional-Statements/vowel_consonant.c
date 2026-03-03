/*
Write a C program that takes a character as input and checks whether it is a vowel or a consonant.
Example:
Input:
a
Output:
vowel

Input:
z
Output:
consonant
*/

#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')printf("vowel");
    else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))printf("consonant");
    else printf("invalid");
    return 0;
}
