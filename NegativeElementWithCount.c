#include <stdio.h>

int main(){
     int n;
    printf("Enter the length of array:");
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&array[i]);
    }
    int count = 0;
    for(int i = 0;i<n;i++){
        if(array[i] < 0){
           
            
                printf("%d,",array[i]);
            
            
            
            count++;
        }
    }
    printf("\nThe Total Negative Elements is %d",count);
    return 0;
}