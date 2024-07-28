//Accept number from user and check whether number is even or odd
#include<stdio.h>

typedef int Bool;

#define TRUE 1;
#define FALSE 0;

Bool CheckNo(int iNo)
{
    if(iNo % 2 ==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{
    int iValue = 0;
    Bool bRet = FALSE;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet = CheckNo(iValue);

    if(bRet == TRUE)
    {
        printf("%d is Even number",iValue);
    }
    else
    {
        printf("%d is Odd number",iValue);
    }

    return 0;
}
