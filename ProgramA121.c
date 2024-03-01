// Assign 25 - 1 = Write a Program which display ASCII table. 
// Table contains symbol, Decimal, Hexadecimal and 
// Octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("--------------- ASCII Table ------------------------\n");
    
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\t%o\t%x\n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}