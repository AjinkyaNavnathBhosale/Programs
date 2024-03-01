// Assign 26 - 2 = Write aprogram which accept string from user and 
// Count number of small characters.


#include<stdio.h>

int CountSmall(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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
    
    iRet = CountSmall(Arr);    // strlenX(100)  

    printf("%d\n",iRet);  
    return 0;
}