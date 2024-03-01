// Assign no.7-5 = Write a program which accept number from user and display its table in reverse order.

#include<stdio.h>

void TableRev(int iNo)
{
    auto int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo * 10) ; iCnt >= iNo; iCnt--)
    {
        if((iCnt % iNo) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}
// Time complexity = O(N)
