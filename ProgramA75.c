// Assign no.15- 5 = Accept N numbers from user and 
// Return product of all odd elements.  

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE -1

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iSum = iSum * Arr[iCnt];
        }
    }
    return iSum;
    
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    int iRet = 0;

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

   
    iRet = Product(p, iSize);
    printf("Product is %d", iRet);

    free(p);

    return 0;
}