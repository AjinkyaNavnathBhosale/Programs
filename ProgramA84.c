// Assign no.17- 4 = Accept number from user and display below pattern.


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
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