#include <stdio.h>
float convert(int temp);
int main(){
    float temp;
    printf("Enter the temperature:");
    scanf("%f",&temp);
    float finalTemp = convert(temp);
    printf("Enter Final Temperature is %0.2f",finalTemp);
    return 0;
}
float convert(int temp){
    return ((9.0/5)*temp) + 32;
}