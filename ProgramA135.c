// Assign 27 -5 = Write a program which accept string from user and 
// Count number of white spaces.


#include<stdio.h>

int CountWhite(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ') 
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
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);    

    printf("Frequency of space is : %d\n",iRet);  
    return 0;
}