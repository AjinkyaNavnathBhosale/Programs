// Assign 27 - 2 = Write a program which accept string from user and 
// Convert it into upper case.

#include<stdio.h>

void struprX(char str[])
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);    

    printf("Modified String is : %s\n",Arr);  
    return 0;
}