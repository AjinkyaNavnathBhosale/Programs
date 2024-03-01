// Assign. 50 = 3. Write a recursive program which accept number from user
// and Count number of small character. 

#include<stdio.h>

int CountSmall(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
        CountSmall(str);
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountSmall(Arr);

    printf("Count of small characters is : %d\n",iRet);
    return 0;
}
