#include<stdio.h>
int main(){
    int num;
    // do{
    //     printf("Enter a integer number :");
    //      scanf("%d",&num);
    // }while(num%2==0);
    do{
        printf("Enter a integer number :");
        scanf("%d",&num);
    }while(num%7!=0);
    return 0;
}