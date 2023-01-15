#include <stdio.h>

int sum(int,int);
void main(){
int a,b,sum1;
scanf("%d%d",&a,&b);
sum1 = sum(a,b);
printf("%d",sum1);
}
int sum(int x,int y){
    return x + y;
}