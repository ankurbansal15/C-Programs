#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    // The Following program will the user to guss the numnber generate by the program
    srand(time(0));
    int number = rand();
    int count = log10(number) + 1;
    int randNum = number / (pow(10, count - 1));
    int gusses = 0;
    while (1)
    {
        printf("Enter your number(1-9):");
        int userNum;
        scanf("%d", &userNum);
        gusses++;
        if (randNum > userNum)
        {
            printf("Higher Number Please\n");
        }
        else if (randNum < userNum)
        {
            printf("Lesser Number Please\n");
        }
        else
        {
            printf("Your Guss is Right\n");
            printf("No of Gusses is ",gusses);
            break;
        }
    }
    return 0;
}