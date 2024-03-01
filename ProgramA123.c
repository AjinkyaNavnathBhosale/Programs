// Assign 25 - 3 = Accept character from user.
// If it is capital then display all the character from the input character till Z.
// If input character is small then print all the characters in reverse order till a.

#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;

        for(iCnt = 1; iCnt <= ch; iCnt++, ch++)
        {
            if((ch >= 'A') && (ch <= 'Z'))
            {
                printf("%c\t",ch);  
            }
        }
        for(iCnt = 1; iCnt <= ch; iCnt++, ch++)
        {
            if((ch >= 'a') && (ch <= 'z'))
            {
                printf("%c\t",ch);  
            }
        }
            
}
        
int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}