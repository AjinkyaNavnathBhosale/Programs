// Assign no.5-3. Write a program which accept two numbers from user and
// check whether that numbers are equal or not.

#include<stdio.h>

typedef int bool;

#define TRUE 1
#define FALSE 0

bool ChkEqual(iNo1 ,iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }    
    else
    {
        return FALSE;
    }
}

int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    bool bRet = FALSE;

    printf("Please enter first number : \n");
    scanf("%d",&iValue1);

    printf("Please enter second number : \n");
    scanf("%d",&iValue2);


    bRet = ChkEqual(iValue1 ,iValue2);
    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;

}