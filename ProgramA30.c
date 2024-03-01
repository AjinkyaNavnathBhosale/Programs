// Assign no.6-5. Write a program which accept N from user and print first 5 multiples of N.

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt <= (iNo * 5); iCnt++)
    {
        if((iCnt % iNo) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
// Time complexity : O(N)
