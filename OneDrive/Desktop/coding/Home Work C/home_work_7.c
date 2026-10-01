#include<stdio.h>
int main(){
    // int num;
    // printf("Enter a integer number :");
    // scanf("%d",&num);
    // if(num>0 ){
    //     for(int i=2;i<num;i++){
    //         if(num%i==0){
    //             printf("%d is not a prime number\n",num);
    //             break;
    //         }
    //         else
    //         printf("%d is a prime number\n",num);
    //     }

    // }
    int k=1;
    for(int i=2;i<=100;i++){
        k=1;
      for(int j=2;j<i;j++){

        if(i%j==0){
            k=0;
            break;
        }
      }
      if(k!=0)
      printf("%d\n",i);
}
    return 0;

