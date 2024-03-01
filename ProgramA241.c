// Assign. 49 = 1. Write a recursive program which accept number from user
// and isplay below pattern. 

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 0;
    
    if(iNo > iCnt)
    {
        printf("%d\t*\t",iNo);
        iNo--;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}
