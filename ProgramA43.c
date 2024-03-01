// Assign no.9-3 = Write a program which accept distance in kilometre and convert it into meter.
//(1 Kilometer = 1000 Meter)

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iCnt = 0;
    int iSum = 1;

    for(iCnt = iNo; iCnt <= iNo; iCnt++)
    {
        iSum = (iCnt*1000);
    }
    return iSum;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter Distance \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d Meter",iRet);

    return 0;
}
// Time complexity = O(N)

