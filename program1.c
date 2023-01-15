#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    (a>b)?printf("a is greater than b"):((a==b)?printf("a is equal to b"):printf("a is smaller than b"));
    
    return 0;
}