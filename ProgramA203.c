// Assign = 41 - 3. Write application which accept file name from user and 
// read all data from that file and display contents on screen.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[30];
    char Arr[100] = {'\0'};
    int fd = 0 , iRet = 0;

    printf("Enter the name of file that you want to create from current directory\n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to create %s file\n",FileName);
    }    
    else
    {
        printf("%s gets created succesfully with file descriptor %d\n",FileName,fd);

        iRet = read(fd,Arr,22);

        printf("Data from file is : %s\n",Arr);

        printf("%d bytes gets succesfully read from the file\n",iRet);


        close(fd);
    }

    return 0;
}