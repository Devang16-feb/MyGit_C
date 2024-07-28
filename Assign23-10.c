#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int *p = NULL;
    int icnt = 0;

    printf("Enter the number of elements:\n");
    scanf("%d",&size);

    p = (int*)malloc(size*sizeof(int));

    printf("Please Enter the element:\n");

    for(icnt=0;icnt<size;icnt++)
    {
        scanf("%d",&p[icnt]);
    }
    printf("Enter the elements:\n");

    for(icnt=0;icnt<size;icnt++)
    {
        printf("%d\t",p[icnt]);
    }
    free(p);
    return 0;

}