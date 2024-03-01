// Assign no.7-3 = Write a program to find factorial of given number.

#include<stdio.h>

int Factorial(int iNo)
{
    auto int iCnt = 0;
    auto int iSum = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1 ; iCnt--)
    {
        iSum = iSum * iCnt;
        printf("%d\n",iCnt);
    }
    return iSum;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}
// Time complexity = O(N)