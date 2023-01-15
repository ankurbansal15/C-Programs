#include <stdio.h>

int main(){
    float length,breadth;
    printf("Enter the value of length:\n");
    scanf("%f",&length);
    printf("Enter the value of breadth:\n");
    scanf("%f",&breadth);
    float area = length * breadth;
    printf("The Area of Rectangle is %0.2f",area);
    return 0;
}