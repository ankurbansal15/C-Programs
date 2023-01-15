#include <stdio.h>
int main(){
     int n,sum = 0,max,min;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i<n;i++){
        printf("Enter the element:");
     scanf("%d",&array[i]);
    }
    for(int i = 0;i<n;i++){
        if(i == 0){
            min = array[i];
            max = array[i];
        }
        if(array[i] < min){
            min = array[i];
        }
        if(array[i] > max){
            max = array[i];
        }
    }
    printf("Max = %d,Min = %d",max,min);
    return 0;
}