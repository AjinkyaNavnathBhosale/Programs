// Assign = 41 - 2. Write application which accept file name and 
// Creat that file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter the name of file that you want to create into current directory\n");
    scanf("%s",FileName);  

    fd = creat(FileName,0777);

    if(fd == -1)
    {
        printf("Unable to creat %s file\n",FileName);
    }    
    else
    {
        printf("%s gets Created succesfully with file descriptor %d\n",FileName,fd);
        close(fd);
    }

    return 0;
}