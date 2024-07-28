#include<stdio.h>
int main(){
    int Arr[5]={10,20,30,40,50};

    int *p=Arr;
    int *q=&(Arr[2]);
    int *x=&(Arr[0]);

    printf("%d\n",*p);
    printf("%d\n",*q);
    printf("%d\n",*x);

}