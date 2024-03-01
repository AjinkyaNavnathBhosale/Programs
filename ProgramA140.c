// Assign 28 - 5 = Write a program which accept string from user and
// Reverse that string in place.

#include<stdio.h>

void StrRevX(char str[])
{
    int iRev = 0;
    while(*str != '\0')
    {
        if(*str == '\0') 
        {
            iRev = iRev * *str;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("Modified string is : %s\n",Arr);  
    return 0;
}