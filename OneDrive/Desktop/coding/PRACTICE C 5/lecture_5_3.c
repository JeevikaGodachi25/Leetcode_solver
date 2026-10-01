#include<stdio.h>
void print( char a);
int main(){
    char a;
    printf("Enter a character  \'I\' if u r INDIAN   or \'F\' if ur French: ");
    scanf("%c",&a);
    print(a);
    return 0;
}
void print( char a){
    if(a=='I'){
        printf("Namaste\n");
    }
    else if(a=='F'){
        printf("Bonjour\n");
    }
    else{
        printf("Invalid input\n");
    }
}