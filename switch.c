#include<stdio.h>
int main()
{
    int standard=0;

    printf("enter the standard:\n");
    scanf("%d",&standard);

    switch (standard)
    {
        case 1:
        printf("exam at 7 AM");
        break;
        case 2:
        printf("exam at 8 AM");
        break;
        case 3:
        printf("exam at 9 AM");
        break;
        case 4:
        printf("exam at 10 AM");
        break;
        default:
        printf("wrong standard !!");
        break;
    }


    return 0;

}