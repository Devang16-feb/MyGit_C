#include<stdio.h>
void Marvellous()
{
    int i = 11;
    auto int j = 21;
    auto int k;
    // all three variable consider as auto storage class

    printf("%d\n",k); // it will give Garbege value or 0/0.0/'/0'
}
int main()
{
    printf("demonstration of auto storage class\n");
    Marvellous();

    return 0;
}