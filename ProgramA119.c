// Assign 24 - 4 = Accept Character from user and 
// Check whether it is alphabet or not(A-Z a-z).

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(((ch >= 'a') && (ch <= 'z')))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }

    return 0;
}