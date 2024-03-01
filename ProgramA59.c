// Assign. 12-4 = Write a program which accept number from user and 
// return multiplication of all digits.


#include<stdio.h>

int MultiDigits(int iNo)
{
    int iSum = 1;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit != 0))
        {
          iSum = iSum * iDigit;
        }
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf(" Multiplication of digits : %d",iRet);
    
    return 0;
}
