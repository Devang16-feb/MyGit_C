#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// SEEK_SET  Beginning of File
//SEEK_CUR   Current Position
// SEEK_END  End of File

int main()
{
    char Name[30];
    int fd = 0;
    int iRet = 0;
    char Data[30]= {'\0'};

    printf("Enter the name of file that you want to open\n");
    scanf("%s",Name);

    fd = open(Name,O_RDWR);
    lseek(fd,10,SEEK_SET);
    iRet = read(fd,Data,10);

    printf("%d Bytes gets Succesfully read into the file\n",iRet);
    printf("%s\n",Data);

    close(fd);

    return 0; 

}