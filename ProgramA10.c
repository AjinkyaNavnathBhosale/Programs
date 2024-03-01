// 10) Acceot one number from user and
// Check that whether number is even or odd.

#include<stdio.h>

#define TRUE 1
#define FALSE 0
int CheckEven(int iNo)
{
    if((iNo % 2) == 0)
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
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CheckEven(iValue);
    if(iRet == 1)
    {
        printf("%d is an even number\n",iValue);
    }
    else
    {
        printf("%d is an odd number\n",iValue);
    }

    return 0;
}