// Assign no.16- 4 = Accept N numbers from user and 
// Display all such numbers which cotains 3 digits in it.  

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        
            if(Arr[iCnt] % 10);
            {
                iDigit++;
                printf("%d\t",Arr[iCnt]);

            }
            
        

    }
}   

int main()
{
    int iSize = 0, iCnt = 0;
    int *p= NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

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

    Digits(p,iSize);

    free(p);
    return 0;
}