// Assign 25 - 4 = Accept Character from user and 
// Check whether it is speacial symbol or not(!,@,#,$,%,^,&,*).

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpeacial(char ch)
{
    if((ch >= '!') && (ch <= '/') || (ch >= ':') && (ch <= '@') )
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

    bRet = ChkSpeacial(cValue);

    if(bRet == TRUE)
    {
        printf("It is speacial Character");
    }
    else
    {
        printf("It is not a speacial Character");
    }

    return 0;
}