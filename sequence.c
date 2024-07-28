#include<stdio.h>

int main()
{
    int No1 = 0;
    int No2 = 0;
    int Ans = 0;

    printf("Enter the 1st Num:\n");
    scanf("%d",&No1);

    printf("Enter the 2nd Num:\n");
    scanf("%d",&No2);

    Ans = No1 + No2;
    printf("Addition is :%d\n",Ans);

    return 0;
}