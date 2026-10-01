#include<stdio.h>
int main(){
    float marks;
    printf("Enter the marks :");
    scanf("%f",&marks);
    if ( marks<30)
        printf("C\n");
    else if(marks>=30 && marks<70)
        printf("B");
    else if(marks>=70 &&  marks<90)
        printf("A");
    else 
        printf("A++");
    return 0;
}