#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    int FD = 0;
    char Data[30] = {'\0'};

    printf("Enter file name that you want to open : \n");
    scanf("%s",Name);

    FD = open(Name,O_RDWR);
    if(FD == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File is succesfully opened\n");
    }
    lseek(FD,9,SEEK_SET);
    read(FD,Data,10);   // from 9 upto futher 10 charcters
    printf("Data from file is :");
    write(1,Data,10);

    lseek(FD,10,SEEK_CUR);
    read(FD,Data,5);
    printf("\nData from file is :");
    write(1,Data,5);

    lseek(FD,-10,SEEK_END);
    read(FD,Data,5);
    printf("\nData from file is :");
    write(1,Data,5);
    
    close(FD);

    return 0;
}