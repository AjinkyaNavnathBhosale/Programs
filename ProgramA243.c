// Assign. 49 = 3. Write a recursive program which accept string from user
// and count number of characters. 

#include<stdio.h>

int strlenXR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        strlenXR(str);
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    
    iRet = strlenXR(Arr);

    printf("Count of charactor is : %d\n",iRet);
    return 0;
}
