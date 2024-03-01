// 1) Program to divide two numbers

#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    auto int iAns = 0;

    if(iNo2 / iNo1)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}    


int main()
{
    auto int iValue1 = 15; 
    auto int iValue2 = 5;
    auto int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Divide is %d",iRet);

    return 0;
}