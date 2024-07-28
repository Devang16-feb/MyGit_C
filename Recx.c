#include<stdio.h>

void Display(int No)  // Callee
{
    static int iCnt = 0;

    if(iCnt < No)
    {
        printf("Jay Ganesh....\n");
        iCnt++;
        Display(No);   // Recursive call
    }
}

int main()
{
    Display(3);  //Caller

    return 0;
}