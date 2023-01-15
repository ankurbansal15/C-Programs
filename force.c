#include <stdio.h>
float force(float mass);
int main(){
    float mass;
    printf("Enter the value of mass:");
    scanf("%f",&mass);
    printf("The Force on the body is %0.2f",force(mass));
    return 0;
}
float force(float mass){
return mass * 9.8;
}