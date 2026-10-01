#include<stdio.h>
int main(){
    int days;// -->mon--1   -->tue--2
    printf("Enter the days in number :");
    scanf("%d",&days);
    switch(days){
        case 1 : printf("Monday \n");
                break;
        case 2: printf("Tuesday");
                break;
        case 3: printf("wednesday");
                break;
        case 4: printf("Thrusday");
                break;
        case 5: printf("Friday");
                break;
        case 6: printf("Saturday");
                break;
        //default : printf("Invalid number ");
    }
    return 0;
}