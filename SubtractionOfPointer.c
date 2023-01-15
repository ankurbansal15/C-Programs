#include <stdio.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int b[6] = {6,7,8,9,10};
    int *i = a;
    int *j = b;
    printf("%u\n",i);
    printf("%u\n",j);
    printf("%u",i-j);
    return 0;
}