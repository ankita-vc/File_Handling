#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    printf("%d\n",O_RDONLY);    // 0
    printf("%d\n",O_WRONLY);    // 1
    printf("%d\n",O_RDWR);      // 2

    return 0;
}

/*
#define O_RDONLY 0
#define O_WRONLY 1
#define O_RDWR 2
*/
