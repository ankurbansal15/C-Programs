#include <stdio.h>
int f(int n);
int main(){
    int nth;
    printf("Enter the value of n:");
    scanf("%d",&nth);
    printf("%d",f(nth));
    return 0;
}
int f(int n){
    if( n == 1 || n == 2){
        return 1;
    }else if( n == 0){
        return 0;
    }else{
   return f(n-1) + f(n-2);

    }
}