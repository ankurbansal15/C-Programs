#include <stdio.h>

int main(){
    int r,c;
    printf("1st Array\n");
    printf("Enter the no of columns:");
    scanf("%d",&c);
    printf("Enter the no of rows:");
    scanf("%d",&r);
    //Definting of 1st Array
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
    //Definding of 2nd Array
    int r_s,c_s;
    printf("2nd Array\n");
    int array_s[r][c];
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("Enter the value of element at (%d,%d):",i,j);
            scanf("%d",&array_s[i][j]);
        }
    }
    printf("The input Array is \n");
     for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d ",array_s[i][j]);
        }
        printf("\n");
    }

    //Addition of two array
    //Waring:The rank of two matrix must be same
    int array_f[r][c];
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            array_f[i][j] = array[i][j] + array_s[i][j];
        }
    }
     printf("The final Array is \n");
     for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d ",array_f[i][j]);
        }
        printf("\n");
    }
    return 0;
}