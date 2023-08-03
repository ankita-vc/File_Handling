#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    int FD= 0;
    char *Data= "India is my Country";

    printf("enter file name that you want to open:\n");
    scanf("%s", Name);

    FD= open(Name, O_RDWR);  
    if(FD == -1)
    {
        printf("unable yo open file\n");
        return -1;
    }
    else
    {
        printf("file is successfully opened\n");
    }

    printf("data from file is:\n");
    write(1, Data, 5);   // 1 is system.out

    close(FD);

    return 0;
}