// Assign 26 - 1 = Write aprogram which accept string from user and 
// Display it in reverse order.


#include<stdio.h>

void Reverse(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
    
    Reverse(Arr);    // strlenX(100)  

    return 0;
}