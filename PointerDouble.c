#include <stdio.h>
void tenTimes(int *n);
int main()
{
    int num;
    printf("Enter the value of n:");
    scanf("%d", &num);
    printf("Enter the value of n: %d\n", num);

    tenTimes(&num);
    printf("Enter the value of n: %d", num);
    return 0;
}
void tenTimes(int *n)
{
    *n = *n * 10;
}