#include<stdio.h>
int main(){
    float a,area;
    printf("Enter a side of area:");
    scanf("%f",&a);
    area=a*a;
    printf("%.2f",area);
    return 0;
}