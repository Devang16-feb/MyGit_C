#include<stdio.h>
void Marvellous()
{
    int x = 10;
    x++;
    printf("Value of x is %d \n",x);
}
int main()
{
    printf("demonstration of auto storage class\n");

    Marvellous();
    Marvellous();  // again new memory will allocated x=10
    Marvellous();  // again new memory will allocated x=10

    return 0;
}