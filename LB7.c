//Accept two numbers from user and Display first number in second number 
//of times
#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 1;
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    while(iCnt<=iFrequency)
    {
        printf("%d\t",iNo);
        iCnt++;
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the value1 and value2 :\n");
    scanf("%d\n%d",&iValue1,&iValue2);
    
    Display(iValue1,iValue2);

    return 0;
}