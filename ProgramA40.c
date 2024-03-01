// Assign no.8-5 = Write a program which returns difference between even factorial and odd factorial of given number.

#include<stdio.h>

int FactorialDiff(int iNo)
{
    auto int iCnt = 0;
    auto int iSum1 = 1, iSum2 = 1;
    auto int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1 ; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iSum1 = iSum1 * iCnt;
        }
        else
        {
            iSum2 = iSum2 * iCnt;
        }
        iSum = iSum1 - iSum2;
    }
    return iSum;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference Even Factorial and Odd Factorial is %d\n",iRet);

    return 0;
}
// Time complexity = O(N)
