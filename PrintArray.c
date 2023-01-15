#include <stdio.h>

int main(){
    int n;
    printf("Enter the length of array:");
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i<n;i++){
        int element;
        printf("Enter the element:");
        scanf("%d",&element);
        array[i] = element;
    }
    printf("The Array is.....\n");
    for(int i = 0;i<n;i++){
        printf("%d,",array[i]);
    }
    return 0;
}