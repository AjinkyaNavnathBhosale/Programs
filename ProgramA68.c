// Assign no.14- 3 = Accept N numbers from user and 
// check whether that numbers contains 11 in it or not.  

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool Check(int Arr[], int iLength)
{
    int iCnt = 0, flag = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
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
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    bool bRet = FALSE;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

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

    bRet = Check(p, iSize);
    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}