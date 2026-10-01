#include<stdio.h>
int main(){
    int num;
    printf("Enter a  number :");
    scanf("%d",&num);
    int i=0;
    // while(i<=num){
    //     printf("%d\n",i);
    //     i++;
    // }
    for(int i=0;i<=num;i++){
        printf("%d\n",i);
    }
    return 0;
}