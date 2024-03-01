// Assign 26 - 1 = Write aprogram which accept string from user and 
// Count number of capital characters.


#include<stdio.h>

int CountCapital(char str[])
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
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountCapital(Arr);    // strlenX(100)  

    printf("%d\n",iRet);  
    return 0;
}