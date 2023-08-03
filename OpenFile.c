#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    int FD = 0;

    printf("Enter file name that you want to open : \n");
    scanf("%s",Name);

//      System call  
    FD = open(Name,O_RDWR);   // O_RDWR= macro defined in stdio.h, fcntl.h, stdlib.h.   ( Open_Read and Write )
    if(FD == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is succesfully opened\n");
    }
    
    return 0;
}


// O_RDONLY  Read Only
// O_WRONLY  Write Only
// O_RDWR    Reading and Writing both (Usually use this)
// O_CREAT   To create new file