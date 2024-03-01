// Assign no.5-4. Write a program which accept three numbers from user and print its multiplication.

#include<stdio.h>

int Multiply(int iNo1 ,int iNo2,int iNo3)
{
    auto int iSum = 0;
    
    if(iNo1 == 0 ) 
    {
        return iNo2 * iNo3; 
    }
    else if(iNo2 == 0 ) 
    {
        return iNo1 * iNo3; 
    }
    else if(iNo3 == 0 )
    {
        return iNo1 * iNo2; 
    }
    iSum = iNo1 * iNo2 * iNo3;
    
    return iSum;
    
}

int main()
{
    auto int iValue1 = 0, iValue2 = 0,iValue3 = 0;
    int iRet = 0;

    printf("Please enter first number : \n");
    scanf("%d",&iValue1);

    printf("Please enter second number : \n");
    scanf("%d",&iValue2);

    printf("Please enter third number : \n");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1 ,iValue2, iValue3);

    printf("Multiplication is :%d\n",iRet);
   

    return 0;

}