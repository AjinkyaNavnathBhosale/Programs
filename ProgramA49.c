// Assign- 10.4 = Write a program which accept range from user and 
//return addition of all even numbers in between that range.
//(Range should contains positive numbers only)

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart > iEnd) || (iStart < 0))     //Filter
    {
        printf("Invalid range...\n");
        return iSum;
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }    
    }
    return iSum;
}

int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    auto int iRet = 0;
    
    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition of range : %d\n",iRet);
    return 0;

}
// Time complexity = O(N)
