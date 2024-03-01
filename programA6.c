// 1) Accept one number from user and print that number of * on screen.
#include<stdio.h>

void Display(int iNo)
{
    auto int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("*\t");
        }
}

int main()
{
    auto int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}