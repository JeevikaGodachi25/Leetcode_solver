#include<stdio.h>
int main(){
    float num;
    printf("Enter a integer number :");
    scanf("%f",&num);
    if(num>0 && num==(int)num )
        printf(" Natural number");
    else 
        printf("not Natural number");
    return 0;
}