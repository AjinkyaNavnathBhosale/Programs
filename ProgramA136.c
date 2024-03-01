// Assign 28 - 1 = Write aprogram which accept string from user and accept one character
// Check whether that character is present in string or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char str[], char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    if(*str == ch)
    {
         return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[20];
    char cValue = '\0';

    bool bRet = false;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter the character  : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);    
    if(bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}