// Assign no.5-2. Write a program which accept one number from user and 
// check whether that number is greater than 100 or not.

#include<stdio.h>

typedef int bool;

#define TRUE 1
#define FALSE 0

bool ChkGreater(iNo)
{
    if(iNo >= 100)
    {
        return 1;
    }    
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);
    if(bRet == 1)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;

}