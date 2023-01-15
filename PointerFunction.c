#include <stdio.h>
void function(int *a);
int main(){
    int i = 3;
    int *j = &i;
    printf("The Address of i is %u\n",j);
    function(&i);

    return 0;
}
void function(int *a){
printf("The Address of a is %u\n",a);
}