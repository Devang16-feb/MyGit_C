#include<stdio.h>

int Multiplication(int No1,int No2)
{
    int Ans =0;
    Ans =No1*No2;
    return Ans;
}

int main(){
    int Value1=0,Value2=0,Ret=0;

    int(*fptr)(int,int);
    fptr= Multiplication;

    printf("enter the first Number:\n");
    scanf("%d",&Value1);

    printf("enter the Second Number:\n");
    scanf("%d",&Value2);

    Ret =fptr(Value1 , Value2);
    
    printf("Multiplicaton is: %d\n",Ret);
    return 0;
}
//int Multiplication(int No1,int No2)

// int (*fptr)(int  ,int );