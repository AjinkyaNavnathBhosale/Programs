// Assign 27 - 1 = Write aprogram which accept string from user and 
// Convert it into lower case.


#include<stdio.h>

void strlwrX(char str[])
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);    

    printf("Modified String is : %s\n",Arr);  
    return 0;
}