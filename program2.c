#include <stdio.h>

int main(){
    float r;
    printf("Enter the value of r:\n");
    scanf("%f",&r);
    float area = 3.14 * r * r;
    printf("The area of circle is %0.2f\n",area);
    float h;
    printf("Enter the value of h:\n");
    scanf("%f",&h);
    float volume = area * h;
    printf("The volume of the cylender is %0.2f",volume);
    return 0;
}