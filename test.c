#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a[n],size;
    size = n;
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(a[i] == a[j]){
                for(int k = j;k<(n-1);k++){
                    a[k] = a[k+1];
                }
                size--;
            }
        }
    }
    for(int i = 0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;
}