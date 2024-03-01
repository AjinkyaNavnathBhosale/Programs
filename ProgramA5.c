// 5) Acceot one number from user and print that number of * on screen.

#include<stdio.h>

void Accept(int iNo)
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
    iValue = 5;

    Accept(iValue);

    return 0;
}