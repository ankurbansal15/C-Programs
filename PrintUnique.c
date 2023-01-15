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
    printf("The unique elements in the array is:");
    int array2[n];
    int count = 0;
    for(int i = 0;i<n;i++){
    int flag = 0;
    for(int j = 0;j<count;j++){
        if(array[i] == array2[j]){
              flag++;
        }
    }
    if(flag == 0){
    array2[count] = array[i];
    count++;
    }
    }
    for(int i = 0;i<count;i++){
        printf("%d ",array2[i]);
    }
    return 0;
}