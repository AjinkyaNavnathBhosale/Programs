// Assign no.15- 1 = Accept N numbers from user and 
// Accept one another number as NO, check whether NO is present or not.  

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, flag = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            flag++;
        }
    }
    if(flag > 0)
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
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    bool bRet = FALSE;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter number the element that you want to search :\n");
    scanf("%d",&iValue);


    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n", iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    

    bRet = Check(p, iSize, iValue);
    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("False");
    }

    free(p);

    return 0;
}