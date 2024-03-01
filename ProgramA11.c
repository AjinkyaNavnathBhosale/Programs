// Assign - 3 = 1.Write a program which accept one number from user and print that number of even number on screen.

#include<stdio.h>

void PrintEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("%d is a Even number.",iNo);          
    }
    
}
int main()
{
    int iValue = 0;
           

    printf("Enter number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}