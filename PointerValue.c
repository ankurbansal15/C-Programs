#include <stdio.h>

int main(){
    int a = 3;
    int *b = &a;
    printf("The Address of a is %u\n",b);
    printf("The Value of stored var is %d",*b);

    return 0;
}