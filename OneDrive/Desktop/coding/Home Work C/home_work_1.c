//WACP to print the average of 3 numbers
#include<stdio.h>
int main(){
    int a,b,c;
    float avg;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average of three numbers :%.2f",avg);
    return 0;

}