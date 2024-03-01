// 4) Acceot two number from user and 
// Display first number in second number of times.

#include<stdio.h>

void Display(int iNo, int ifrequency)
{  
    int iCnt = 0;
    if(ifrequency < 0)     // Updator
    {
        ifrequency = -ifrequency;
    }
    
    for(iCnt = 1; iCnt <= ifrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
    
}

int main()
{
    auto int iValue = 0;
    auto int iCount = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}
