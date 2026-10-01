//WACP to find if character enter by user is uppercase or not  
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a   English character :");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("Uppercase");
    else  if(ch>='a' && ch<='z') 
        printf("lowercase");
    else
        printf("Not a English Character .");
    return 0;
}