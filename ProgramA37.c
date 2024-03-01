// Assign no.8-2 = Accept in US dollar and return its corresponding value in indian currency.
//consider 1$ as 70 rupees.

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iCnt = 0;
    int iSum = 1;

    for(iCnt = iNo; iCnt <= iNo; iCnt++)
    {
        iSum = (iCnt*70);
    }
    return iSum;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter number of USD \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}
// Time complexity = O(N)
