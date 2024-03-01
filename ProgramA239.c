// Assign. 48 = 4. Write a recursive program which display below pattern. 

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;
    static char ch = 'A';

    if(iCnt <= iNo)
    {
        printf("%c\t",ch);
        iCnt++;
        ch++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}
