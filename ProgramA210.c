// Assign = 42 - 5. Write program which accept file name and one count from user and 
// Read that number of characters from starting position.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024

void DisplayN(char FName[], int iSize)
{
    char Arr[BUFFERSIZE] = {'\0'};

    int fd = 0 , iRet = 0;
    int i = 0, iCount = 0;

    fd = open(FName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open %s file\n",FName);
    }    
    else
    {
        printf("%s gets opened succesfully with file descriptor %d\n",FName,fd);

        while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
        {
            for(i = 0; i < iSize; i++)
            {
                printf("%c",Arr[i]);
            }
        }
    }
    close(fd);

}

int main()
{
    char FileName[30];
    int iRet = 0, iValue = 0;
    
    printf("Enter the name of file that you want to open from current directory\n");
    scanf("%s",FileName);

    printf("Enter the character that you want to search :\n");
    scanf(" %d",&iValue);

    DisplayN(FileName,iValue);

    return 0;
}