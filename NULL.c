#include<stdio.h>
int main(){
    int Arr[]={11,21,23,34,45,67};
    int *p=NULL;
    int *q=NULL;

    p=&(Arr[0]);
    q=&(Arr[4]);

    printf("%d\n",p);
}