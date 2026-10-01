//print  the sum of first n natural number 
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",& num);
    int i=1,sum=0;

    for(int i=1,j=num ;i<=num && j>1;i++,j--) {
        sum+=i;
        printf("%d\n",j);    }
    printf(" SUM = %d\n",sum);

    return 0;
}