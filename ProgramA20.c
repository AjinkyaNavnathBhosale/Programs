// Assign no.4-5. Write a program which accept number from user and 
// return difference between summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0, iSum2 = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0 )  
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
        iSum = iSum1 - iSum2;
        

    }
    return iSum;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    
    iRet = FactDiff(iValue);

    printf("Summation of all non factors and factors : %d",iRet);
    return 0;
}
// Time Complexity : O(N)

