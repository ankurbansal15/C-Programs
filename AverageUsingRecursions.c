#include <stdio.h>
float avg();
int main(){
    int num1,num2,num3;
    printf("Enter the three number:");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("The Average of three numbers is %0.2f",avg(num1,num2,num3));
    return 0;
}
float avg(int num1,int num2,int num3){
    return (num1+num2+num3)/3.0;
}