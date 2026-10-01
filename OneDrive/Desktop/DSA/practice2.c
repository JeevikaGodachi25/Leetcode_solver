#include<stdio.h>
int main(){
    int vector[5]={1,2,3,4,5};
    int *p=vector;
    printf("%p\n",vector);
    printf("%p\n",p);
    printf("%p\n",p+0);
    printf("%p\n",&vector[0]);
    return 0;
}