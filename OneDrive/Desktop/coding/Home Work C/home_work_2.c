//WACP to check if given character is digit or not 
#include<stdio.h>
int main(){
    char star;
    printf("Enter a character: ");
    scanf("%c",&star);
    printf("%d\n",star>='0' && star<='9');
    return 0;
}