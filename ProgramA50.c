// Assign- 10.5 = Write a program which accept range from user and display all numbers in between that range in reverse order.

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
    if(iStart > iEnd)       //Filter
    {
        printf("Invalid range...\n",iCnt);
    }
}

int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    
    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;

}
// Time complexity = O(N)
