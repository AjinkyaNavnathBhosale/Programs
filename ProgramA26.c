// Assign no.6-1. Write a program which accept numbers from user and print that number of $ & * on screen.


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if( iNo < 0)  //Updater
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t"); 
        printf("$\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you want to display * & $ on screen\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
// Time complexity : O(N)