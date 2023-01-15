#include <stdio.h>

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = a;
    printf("%u->%d\n",ptr,a[0]);
    printf("%u->%d",ptr+2,a[2]);
    
    return 0;
}