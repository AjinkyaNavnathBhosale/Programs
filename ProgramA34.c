// Assign no.7-4 = Write a program which accept number from user and display its table.

#include<stdio.h>

void Table(int iNo)
{
    auto int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt <= (iNo * 10); iCnt++)
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

    Table(iValue);

    return 0;
}
// Time complexity = O(N)
