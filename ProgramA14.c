//Assign no3-4. Accept one charactor from user and convert case of that charactor.


#include<stdio.h>
#include<string.h>

void DisplayConvert(char cNo)
{
        if(cNo >= 'a' && cNo <= 'z' )
        {
            cNo = cNo -32;
            printf("%c",cNo);          
        }
        else if( cNo >= 'A' && cNo <= 'Z')
        {
            cNo = cNo +32;
            printf("%c",cNo );
        }
    
}

int main()
{
    char cValue = '\0';
           
    printf("Enter charactor: \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}