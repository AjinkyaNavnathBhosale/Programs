// Assign. 50 = 1. Write a recursive program which accept string from user
// and count white spaces. 

#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpace(str);
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    
    iRet = WhiteSpace(Arr);

    printf("Count of White spaces is : %d\n",iRet);
    return 0;
}
