// Assign 27 - 4 = Write a program which accept string from user and 
// Display only digits that string.


#include<stdio.h>

void DisplayDigit(char str[])
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);    

    return 0;
}