#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char FileName[50];
    int fd = 0;
    char Arr[10];
    int iRet = 0;

    printf("Enter the file that  you want to open\n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDONLY);

   iRet = read(fd,Arr,10);
    write(1,Arr,10);

    iRet = read(fd,Arr,10);
    write(1,Arr,10);

   iRet = read(fd,Arr,10);
    write(1,Arr,10);

   iRet = read(fd,Arr,10);
    write(1,Arr,10);

   iRet = read(fd,Arr,10);
    write(1,Arr,10);

    iRet = read(fd,Arr,10);
    write(1,Arr,10);

    iRet = read(fd,Arr,10);
    write(1,Arr,10);

    iRet = read(fd,Arr,10);
    write(1,Arr,10);

   iRet =  read(fd,Arr,10);
    write(1,Arr,10);

    iRet = read(fd,Arr,5);
    write(1,Arr,5);

    iRet = read(fd,Arr,5);

    close(fd);

    return 0;
}