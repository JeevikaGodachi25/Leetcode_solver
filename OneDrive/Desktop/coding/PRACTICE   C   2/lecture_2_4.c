#include<stdio.h>
int main(){
    //int x; int y=x;   -->valid
    //char star="* ";  -->invalid
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("%d\n",a>9 && a<100);
    return 0;
}