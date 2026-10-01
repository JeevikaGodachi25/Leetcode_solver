#include<stdio.h>
int main(){
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age>=18)
    printf("Adult");
    else if(age<18 && age>13)
    printf("Teenage");
    else 
    printf("Child");
    return 0;
}