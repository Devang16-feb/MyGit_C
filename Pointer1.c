#include<stdio.h>

int main(){
    int No = 11;   
    int * ptr = &No; 

    double Data = 90.999;
    double * dptr = &Data;

    printf("%d\n",No);    // 11
    printf("%f\n",Data);  // 90.9999

    printf("%d\n",sizeof(No));
    printf("%d\n",sizeof(ptr));
    printf("%d\n",sizeof(Data));
    printf("%d\n",sizeof(dptr));

    printf("%d\n",*ptr); // 11
    printf("%f\n",*dptr); // 90.9999

    return 0;
}