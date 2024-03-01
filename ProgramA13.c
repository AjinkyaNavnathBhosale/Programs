// 3. Write a program which accept number from user and print even factors of that number.


#include<stdio.h>
#include<stdbool.h>

void EvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

   
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iCnt % 2) == 0  && (iNo % iCnt) == 0  )    // 4
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);
    EvenFactors(iValue);

    return 0;
}
// Time Complexity : O(N/2)