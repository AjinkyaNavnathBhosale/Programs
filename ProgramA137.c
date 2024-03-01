// Assign 28 - 2 = Write aprogram which accept string from user and accept one character
// Return frequency of that character.

#include<stdio.h>

int CountChar(char str[], char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
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

    iRet = CountChar(Arr,cValue);    

    printf("Frequency of character is : %d\n",iRet);  
 
    return 0;
}