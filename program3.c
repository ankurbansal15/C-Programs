#include <stdio.h>

int main(){
    float tempInCel;
    printf("Enter the value of temp in celcius:\n");
    scanf("%f",&tempInCel);
    float tempInFri = ((1.8 *tempInCel) + 32);
    printf("The temp in fahrenheit is:%0.2f",tempInFri);
    return 0;
}