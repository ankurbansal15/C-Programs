#include <stdio.h>
void ReverseArray(int *arr,int n);
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    ReverseArray(a,10);
    for(int i = 0;i<10;i++)
    printf("%d ",a[i]);
    return 0;
}
void ReverseArray(int *arr,int n){
    for(int i = 0;i<n/2;i++){
        int temp;
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}