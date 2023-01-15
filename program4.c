#include <stdio.h>

int main(){
    float P,R,T;
    printf("Enter the value of Principal,Rate,Time:\n");
    scanf("%f%f%f",&P,&R,&T);
    float S = (P*R*T)/100;
    printf("The Value of SI is %0.2f",S);
    return 0;
}