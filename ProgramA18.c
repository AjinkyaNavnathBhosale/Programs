// Assign no.4-3. Write a program which accept number from user and 
// Display all its non factors.


#include<stdio.h>

void Fact(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0 )  
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{   
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    
    Fact(iValue);
   
    return 0;
}

// Time Complexity : O(N)

