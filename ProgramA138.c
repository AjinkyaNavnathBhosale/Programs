// Assign 28 - 3 = Write aprogram which accept string from user and accept one character
// Return index of first occurence of that character.

#include<stdio.h>

int FirstChar(char str[], char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        iCnt++;
        str++;
    }
    if(*str == '\0')
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
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

    iRet = FirstChar(Arr,cValue);    

    printf("Character location is : %d\n",iRet);  
    return 0;
}