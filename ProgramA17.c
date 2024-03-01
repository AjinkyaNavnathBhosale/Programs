// Assign no.4-2. Write a program which accept number from user an
// Display its factors in decreasing order.


#include<stdio.h>


void FactRev(int iNo)
{
    int iCnt = 0;
    

    //      1               2       3
    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)   // 4
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
    
    FactRev(iValue);
   

    return 0;
}

// Time Complexity : O(N/2)

