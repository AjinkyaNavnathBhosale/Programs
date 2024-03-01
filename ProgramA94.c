// Assign no.19- 4 = Accept number of rows and 
// Number of columns from user and display below pattern.

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = iRow; i >= 1; i--)
    {
        for(j = iCol; j >= 1; j--)
        {
            if((i % 2) == 0)
            {
                printf("%d\t",i);
            }
            else
            {
               printf("%d\t",i);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1,&iValue2);
 
    Pattern(iValue1,iValue2);
    return 0;
}