#include<stdio.h>
#include<stdlib.h>  // for malloc, callo,realloc & free

int main()
{
    int *ptr = NULL;

    ptr = (int *)malloc(5 , sizeof(int));
   
    //Use The Memory 

    ptr = (int*)realloc(ptr, 10 *sizeof(int));  //increse the memory

    free(ptr);

    return 0;
}