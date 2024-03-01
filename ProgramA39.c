// Assign no.8-4 = Write a program to find odd factorial of given number.

#include<stdio.h>

int OddFactorial(int iNo)
{
    auto int iCnt = 0;
    auto int iSum = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1 ; iCnt--)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\n",iCnt);
            iSum = iSum * iCnt;
        }
    }
    return iSum;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n",iRet);

    return 0;
}
// Time complexity = O(N)
