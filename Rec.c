#include<stdio.h>
// here we are using iterative approch
void Display(int No)  // Callee
{
    int iCnt = 0;

    while(iCnt < No)
    {
        printf("Jay Ganesh....\n");
        iCnt++;
    }
}

int main()
{
    Display(4);  //Caller

    return 0;
}