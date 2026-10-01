#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    int *sub=(int*)malloc(n*sizeof(int));
    int **scores=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        printf("Enter the subjects of Student %d : ",i+1);    
        scanf("%d",&sub[i]);
        scores[i]= (int*)malloc(sub[i] *sizeof(int));
        printf("Enter the marks of student %d :",i+1);
        for(int j=0;j<sub[i];j++){
            scanf("%d",&scores[i][j]);
        }
    }
    return 0;
}