#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the first array....\n");
    int array[n];
    for(int i = 0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&array[i]);
    }
    printf("Enter the second array....\n");
    int array2[n];
    for(int i = 0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&array2[i]);
    }
    int array3[2*n];
    for(int i = 0;i<n;i++){
       array3[i] = array[i];
    }
    int j = 0;
    for(int i = n;i<2*n;i++){
        
        array3[i] = array[j++];
        array3[n+i] = array2[i];
    }
    printf("The Array3 is.....\n");
    for(int i = 0;i<n*2;i++){
        printf("%d,",array3[i]);
    }
    return 0;
}