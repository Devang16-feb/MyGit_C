#include<stdio.h>
int main(){
    int Value1=0,Value2=0,Ret=0;

    printf("enter the first Number:\n");
    scanf("%d",&Value1);

    printf("enter the Second Number:\n");
    scanf("%d",&Value2);

    Ret =Value1 * Value2;
    printf("Multiplicaton is: %d\n",Ret);
    return 0;
}