#include<stdio.h>
#include<stdlib.h>

int main()
{
    //int Arr[10];
    float N =0;
    float *ptr = NULL;

    printf("Enter the no of element:\n");
    scanf("%f",&N);

    ptr = (float*)malloc(N * sizeof(float));
   
    free(ptr);

    return 0;
}