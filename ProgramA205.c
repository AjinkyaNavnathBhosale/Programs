// Assign = 41 - 5. Write application which accept file name from user and 
// One string from user. Write that string at the end of file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[30], String[30];
    char Arr[100] = {'\0'};  // Sizeof Oprator gives number of bytes for allocated memory. 
    int fd = 0 , iRet = 0;

    printf("Enter the name of file that you want to open from current directory\n");
    scanf("%s",FileName);

    printf("Enter the String \n");
    scanf("%s",String);

    fd = creat(FileName, 0777); // Bitwise OR.

    if(fd == -1)
    {
        printf("Unable to creat %s file\n",FileName);
    }    
    else
    {
        printf("%s %d\n",FileName,String);
        close(fd);
    }

    return 0;
}