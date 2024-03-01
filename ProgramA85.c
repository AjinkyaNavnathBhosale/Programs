// Assign no.17- 5 = Accept number from user and display below pattern.


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % iNo) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the count : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}