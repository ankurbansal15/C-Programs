#include <stdio.h>

int main(){
     int n,sum = 0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i<n;i++){
        printf("Enter the element:");
     scanf("%d",&array[i]);
    }
    for(int i = 0;i<n;i++){
        sum += array[i];
    }
      printf("The Sum of Array is %d",sum);
    return 0;
}