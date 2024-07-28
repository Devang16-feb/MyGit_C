#include<stdio.h>

#pragma pack(1)
int Addition(int num1,int num2)
{ 
    int Ans = 0;
    Ans = num1 + num2;

    return Ans;
}
int main()
{
    int A = 0;
    int B = 0;
    int C = 0;

    printf("value of A is:\n");
    scanf("%d",&A);

    printf("value of B is:\n");
    scanf("%d",&B);

    C = Addition(A,B);
    printf("Value of C is:%d\n",C);

    return 0;
}
