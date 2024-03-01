// Assign no.8-1 = Write a program which accept number from user and display below pattern.


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
        printf("#\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you want to display * & # on screen\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
// Time complexity = O(N)
