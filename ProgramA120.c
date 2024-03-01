// Assign 24 - 1 = Accept division of student from user and 
//depends on the division display exam timing. 
// There are 4 divisions in school as A,B,C,D.
// Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.


#include<stdio.h>

void DisplaySchedule(char ch)
{
     if((ch == 'A') || (ch == 'a'))
    {
        printf("Your exam at 7 am\n");
    }
    else if((ch== 'B') || (ch == 'b'))
    {
        printf("Your exam at 8.30 am\n");
    }
    else if((ch == 'C') || (ch == 'c'))
    {
        printf("Your exam at 9.20 am\n");
    }
    else if((ch == 'D') || (ch == 'd'))
    {
        printf("Your exam at 10.30 am\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}