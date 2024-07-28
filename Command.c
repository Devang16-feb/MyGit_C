#include<stdio.h>

int main(int argc, char *argv[])
{
    int i =0;
    printf("Number of Command line argument are :%d\n",argv);

    for(i =0 ;i< argv; i++)
    {
        printf("%s\n",argv[i]);
    }
    return 0;
}