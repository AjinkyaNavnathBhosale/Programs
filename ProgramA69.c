// Assign no.14- 4 = Accept N numbers from user and 
// return frequency of 11 from it.  


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p= NULL;

    printf("Enter number of elements that you want to enter : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    printf("Dynamic memory gets allocated succesfully...\n");

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }


    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter the element no %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);
    printf("11 Occurs %d times...\n",iRet);

    free(p);
    return 0;
}