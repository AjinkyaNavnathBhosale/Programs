// Assign 26 - 4 = Write aprogram which accept string from user and 
// Check whether it contains vowels in it or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    int iCnt = 0;

   while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')        
        {
            break;
        }
        str++;
    }
    if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')        
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter the String \n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}

