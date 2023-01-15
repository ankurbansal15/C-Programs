#include <stdio.h>

int main(){
    int r,c;
    printf("Enter the no of columns:");
    scanf("%d",&c);
    printf("Enter the no of rows:");
    scanf("%d",&r);
    int array[r][c];
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("Enter the value of element at (%d,%d):",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("The input Array is \n");
     for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
           if(i == j){
            sum += array[i][j];
           }
        }
    }
    printf("The Trac of Matrix is %d",sum);
    return 0;
}