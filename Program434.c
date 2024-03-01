#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;  // Value not preserve.

    while(iCnt <= 4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 1;

    if(iCnt <= 4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
        DisplayR();   // Recursive call
    }
}

int main()
{
    DisplayR();

    return 0;
}