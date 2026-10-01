#include<stdio.h>
void safeprint(void *ptr,int type){
    if(ptr==NULL){
        printf(" NULL Pointer ");
        return;
    }
    if(type == 0){
        int* p=(int*)ptr;
        printf("value : %d , %p",*p,(void*)p);
    }
    else if(type == 1){
        float* p=(float*)ptr;
        printf("value : %f , %p",*p,(void*)p);
    }
    else{
        printf("invalid type");
    }
}
int main(){
    int intarray[10];
    float floatarray[10];
    int * ip=intarray;
    float *fp=floatarray;
    int  intval;
    float floatval;
    int type;
    printf("Enter the array elements:");
    for(int i=0; i<10;i++){
        scanf("%d",ip+i);
    }
    printf("Enter the array elements:");
    for(int i=0; i<10;i++){
        scanf("%f",fp+i);
    }
    printf("the int values and address:");
    for(int i=0;i<10;i++){
        printf("values: %d and adress : %p\n", *(ip+i),(void*)(ip+i));
    }
    printf("the float values and address:");
    for(int i=0;i<10;i++){
        printf("values: %f and adress : %p\n", *(fp+i),(void*)(fp+i));
    }
    printf("Enter the type :");
    scanf("%d",&type);
    if(type==0){
        
        printf("the int value ");
        scanf("%d",&intval);
        safeprint( &intval ,type);
    }
    else if(type==1){
        
        printf("the float value ");
        scanf("%f",&floatval);
        safeprint( &floatval ,type);
    }
    else{
        printf("invalid type.");
    }
    return 0;
}