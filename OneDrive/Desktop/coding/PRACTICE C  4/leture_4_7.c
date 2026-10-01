#include<stdio.h>
int main(){
    int num;
    printf("Enter a integer :");
    scanf("%d",&num);
    int mult=1;
    for(int i=num;i>=1;i--){
        mult*=i;
    }
    printf("Factorial of %d is %d\n",num,mult);
    return 0;

}