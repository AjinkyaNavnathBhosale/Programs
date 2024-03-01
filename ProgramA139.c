// Assign 28 - 4 = Write aprogram which accept string from user and accept one character
// Return index of last occurence of that character.

#include<stdio.h>

int LastChar(char str[], char ch)
{
    int iCnt = 0;
    int iPos = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }
        iCnt++;
        str++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char cValue = '\0';

    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter the character for frequency calculation : \n");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr,cValue);    

    printf("Character location is : %d\n",iRet);  
    return 0;
}