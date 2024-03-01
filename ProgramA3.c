// 3) Program print 5 to 1 numbers on screen.

#include<stdio.h>

void Display()
{
    auto int iNo = 0;
    auto int i = 5;
        for(i = 5; i > iNo; i--)
        {
            printf("%d\t",i);
        }

}

int main()
{
    Display();

    return 0;
}
//Time complexity = O(N)