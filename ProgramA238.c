// Assign. 48 = 3. Write a recursive program which display below pattern. 

#include<stdio.h>

void DisplayR(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d\t",iNo);
        iNo--;
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
