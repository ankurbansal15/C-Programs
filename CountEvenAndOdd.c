#include <stdio.h>

int main(){
     int n,sum = 0,countEven = 0,countOdd = 0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i<n;i++){
        printf("Enter the element:");
     scanf("%d",&array[i]);
    }
    for(int i = 0;i<n;i++){
    if(array[i] % 2 == 0){
        countEven++;
    }else{
        countOdd++;
    }
    }
    printf("Even Elements is %d,Odd Elements is %d",countEven,countOdd);
    return 0;
}