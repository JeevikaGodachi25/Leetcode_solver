#include<stdio.h>
int main(){
    int b,a;
    printf("Enter the number :");
    scanf("%d%d",&b,&a);
    if(b>a){
        printf("b is greater \n");
        if(b%2==0){
            printf("b is even ");
        }
    }
    else{
        printf(" a is smaller ");
    }
    return 0;
}