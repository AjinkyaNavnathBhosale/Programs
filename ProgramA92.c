// Assign no.19- 2 = Accept number of rows and 
// Number of columns from user and display below pattern.

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0', ch1 = '\0';

    for(i = 1; i<= iRow; i++ )
    {
        for(j = 1, ch = 'A',ch1 = 'a'; j <= iCol; j++, ch++, ch1++)
        {
            if((i % 2) == 0)
            {
                printf("%c\t",ch1);
            }
            else
            {
               printf("%c\t",ch);
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