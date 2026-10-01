
#include <stdio.h>
#include<stdlib.h>
int * createArray(int n){
    int * arr1=(int *)malloc(n*sizeof(int));
    if(arr1==NULL){
        printf("Memory allocation Failled.");
    }
    return arr1;
}
int * createZeroArray(int n){
    int * arr2=(int*)calloc(n,sizeof(int));
    if(arr2==NULL){
        printf("Memory Allocation Failled .");
    }
    return arr2;

}
void CopyArray(int* arr1,int *arr2,int n){
    for (int i=0;i<n;i++){
        *(arr2+i)=*(arr1+i); 
    }
}
void readArray(int * arr1,int n){
    printf("Enter the value of Elements :");
    for(int i=0;i<n;i++){
        scanf("%d",arr1+i);
    }
}
void  printArray(int *arr1,int n){
    for(int i=0;i<n;i++){
        printf("array  Elements :%d\n",*(arr1+i));
    }
}
int * reSizeArray(int *arr1,int m){
    int *temp=(int*)realloc(arr1,m*sizeof(int));
    if (temp==NULL){
        printf("Memory Allocation Failled");
    }
    return temp;
}
int main(){
    int n;
    int *arr1;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    arr1=createArray(n);
    readArray(arr1,n);
    printArray(arr1,n);
    int *arr2=createZeroArray(n);
    printArray(arr2,n);
    CopyArray(arr1,arr2,n);
    printf("After Copying the array1  :\n");
    printArray(arr2,n);
    int * oldAddress=arr1;
    int m;
    printf("Enter the new size of the array (Greater Than %d): ",n);
    scanf("%d",&m);

    arr1=reSizeArray(arr1,m);
    printf("After Resizing the array:\n");
    printf("Old Address : %p\n",(void*)oldAddress);
    printf("New Address : %p\n",(void*)arr1);

    return 0;

}