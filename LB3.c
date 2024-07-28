// accept one number and check whether is divisible by 5 or not

#include<stdio.h>

typedef int Bool;
#define true 1;
#define false 0;

Bool CheckDivisible(int iNo)
{
    if(iNo%5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iValue =0;
    Bool bRet =false;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == 1)
    {
        printf("%dis Divisible by 5",iValue);
    }
    else
    {
        printf("%dis not Divisible by 5",iValue);
    }
    return 0;
}