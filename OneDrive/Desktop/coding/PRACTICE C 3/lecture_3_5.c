//WACP to check if student passed or failed
#include<stdio.h>
int main(){
    float  marks;
    printf("Enter your marks :");
    scanf("%f",&marks);
    if(marks<=100 && marks>=35 ){
        printf(" passed");
    }
    else {
        printf("Failed");
    }
    return 0;

}