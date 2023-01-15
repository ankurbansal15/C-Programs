#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i<n;i++){
        printf("Enter the element:");
    scanf("%d",&array[i]);
    }
    int array2[n];
    for(int i = 0;i<n;i++){
        array2[i] =  array[i];
    }
    printf("The Array2 is.....\n");
     for(int i = 0;i<n;i++){
        printf("%d,",array2[i]);
    }
    return 0;
}