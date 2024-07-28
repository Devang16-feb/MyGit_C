#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    char Name[30];
    int fd = 0;

    printf("Enter the name of file that you want to create\n");
    scanf("%s",Name);

    fd = creat(Name,0777);
    if(fd == -1)
    {
        printf("Unable to created file\n");
    }
    else
    {
        printf("Files gets created with FD %d\n",fd);
        //Fd value at index 3
    }
    return 0;

}