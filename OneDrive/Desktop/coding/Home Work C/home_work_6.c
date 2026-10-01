//WACP to print this pattern ***** 4 lines using nested loop
#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=5;j++){
            printf("* ");
        }
        printf("\n");
    }
}