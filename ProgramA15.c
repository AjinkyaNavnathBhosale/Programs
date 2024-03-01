//Assign no3-5. Accept one charactor from user and ckeck whether that charactor is vowel.

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckVowel(char cNo)
{
    if((cNo == 'a' || cNo == 'e' || cNo == 'i' || cNo == 'o' || cNo == 'u' || cNo == 'A' || cNo == 'E' || cNo == 'I' || cNo == 'O' || cNo == 'U'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter charactor : \n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);
    if(bRet == 1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}