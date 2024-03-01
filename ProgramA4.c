// 4) Accept one  numbers and check whether is divisible by 5 or not.

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if((iNo % 5 ) == 0)
    {
        return true;                    // true is consider as 1
    }
    else
    {
        return false;                   //false is consider as 0
    }
}

int main()
{
    auto int iValue = 0;
    bool bRet = false;        //false is consider as 0

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    if(bRet == true)
    {
        printf("Divisible by 5\n");       

    }
    else
    {
        printf("Not Divisible by 5\n");  
    }
    
    return 0;
}