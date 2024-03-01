// Assign = 42 - 3. Write program which accept file name from user and 
// Count number of Spaces from that file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<io.h>

#define BUFFERSIZE 1024

int CountWhite(char FName[])
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
            for(i = 0; i < iRet; i++)
            {
                if(Arr[i] == ' ')
                {
                    iCount++;
                }
            }
        }
    }
    return iCount;
    close(fd);

}

int main()
{
    char FileName[30];
    int iRet = 0;
    
    printf("Enter the name of file that you want to open from current directory\n");
    scanf("%s",FileName);

    iRet = CountWhite(FileName);
    printf("Number of White spaces are : %d\n",iRet);

    return 0;
}