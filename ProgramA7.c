// 2) Accept one number from user and print that number of * on screen.
#include<stdio.h>

void Display(int iNo)
{       //1
    int iCnt = 1;
          //2
    while(iNo > iCnt)
        {
            printf("*\t"); //  4
            iNo--;    //3
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