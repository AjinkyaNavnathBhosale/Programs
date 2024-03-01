// Assign. 50 = 4. Write a recursive program which accept number from user
// and Return Smallest digit. 

#include<stdio.h>

int MinDigit(int iNo)
{
    int iDigit = 0;
    static int iMin = 9;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        MinDigit(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = MinDigit(iValue);
    printf("Smallest digit is : %d\n",iRet);
    return 0;
}