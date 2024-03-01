//Assign no4-1. write a program which accept  number from user and 
// display its muiltiplication of factors.


#include<stdio.h>


int MultiFact(int iNo)
{
    int iCnt = 0;
    int iSum = 1;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
           iSum = iSum * iCnt;
        }
    }
    return iSum;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);
    
    iRet = MultiFact(iValue);
    printf("Multiplication of factors are : %d\n",iRet);

    return 0;
}

// Time Complexity : O(N/2)

