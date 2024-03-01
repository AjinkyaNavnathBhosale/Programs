// Assign 24 - 1 = Accept Character from user and 
// Check whether it is alphabet or not(A-Z a-z).

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return 0;
}