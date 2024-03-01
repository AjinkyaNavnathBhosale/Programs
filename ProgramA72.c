// Assign no.15- 2 = Accept N numbers from user and 
// Accept one another number as NO, return index of first occurrence of that No.  

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE -1

int FirstOcc(int Arr[], int iLength, int iNo)
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
        return flag;
    }
    else 
    {
        return -1;
    }
    
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    int iRet = 0;

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

    

    iRet = FirstOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurence of number is %d\n",iRet);
    }
    
    free(p);

    return 0;
}