// Assign 26 - 3 = Write aprogram which accept string from user and 
// Return difference between frequency of small characters and 
// Frequencyof capital characters.


#include<stdio.h>

int Difference(char str[])
{
    int iCnt1 = 0, iCnt2 = 0;
    int iSum = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt1++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt2++;
        }
        str++;
        iSum = iCnt1 - iCnt2;

    }

    return iSum;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
    
    iRet = Difference(Arr);    // strlenX(100)  

    printf("%d\n",iRet);  
    return 0;
}