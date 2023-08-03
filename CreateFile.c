#include<stdio.h>
#include<unistd.h>  //universal standard
#include<fcntl.h>   // File Control
#include<stdlib.h>

int main()
{
    char Name[30];
    int FD = 0;   // File Descriptor unique identification number

    printf("Enter file name that you want to create : \n");
    scanf("%s",Name);

   // System call  read=4; write=2; execute=1; ==7;
    FD = creat(Name,0777);  // 0777 is number 0 is octal, 777 is for owner, group, other respectively(types of programer) 
    if(FD == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File is succesfully created\n");
    }

    return 0;
}