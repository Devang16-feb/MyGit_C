#include<stdio.h>

int main()
{
    int Arr[5]={10,20,30,40,50};

    printf("%d",Arr);       //base address 100
    printf("%d",&Arr[0]);  //100

    printf("%d",Arr[2]);
    printf("%d",*(Arr+2));
    printf("%d",*(2+Arr));
    printf("%d",2[Arr]);
    return 0;

}