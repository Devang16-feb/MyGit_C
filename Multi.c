#include<stdio.h>
int main(){
    int Arr[4][5];

    Arr[2][2]=11;
    Arr[0][3]=21;

    printf("%d\n",Arr[2][2]);
    printf("%d\n",Arr[0][3]);

    return 0;
}