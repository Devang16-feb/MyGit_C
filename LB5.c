#include<stdio.h>
void Accept(int iNo)
{
    if(iNo <0)
    {
        iNo = - iNo;
    }
    while(iNo>=0)
    {
        printf("*\t");
        iNo--;
    }
}
int main()
{
    int iValue =0;

    printf("Entert the value:\n");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;
}