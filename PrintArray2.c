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
    
     printf("The Array is.....\n");
    for(int i = 0;i<n;i++){
        printf("%d,",array[i]);
    }
    return 0;
}
