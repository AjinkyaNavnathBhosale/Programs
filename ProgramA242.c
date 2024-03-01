// Assign. 49 = 2. Write a recursive program which accept number from user
// and Return Summation of its digits. 

#include<stdio.h>

int SumDigitsR(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        SumDigitsR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = SumDigitsR(iValue);
    printf("Summation of digits : %d\n",iRet);
    return 0;
}