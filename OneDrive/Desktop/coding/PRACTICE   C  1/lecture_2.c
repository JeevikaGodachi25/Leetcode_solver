#include<stdio.h>
#define PIE 3.14
int main(){
     float area,radius;
     printf("Enter the radius :");
     scanf("%f",&radius);
     area=PIE*radius*radius;
     printf("%.2f",area);
     return 0;
}