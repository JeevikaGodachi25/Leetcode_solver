#include<stdio.h>
int main(){
    int num;
    printf("Eter the  positive number :");
    scanf("%d",&num);
    int mult=1;
    for(int i=1;i<=10;i++){
        mult=num*i;
        printf(" %d X %d = %d\n",num,i,mult);
    }
    return 0;
}