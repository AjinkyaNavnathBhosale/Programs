// Assign no.5-1. Write a program which accept name from user and print that name.

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name \n");
    scanf("%[^'\n']s\t",&Name);

    printf("Your name is %s\n",Name);

    return 0;

}
