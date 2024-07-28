#include<stdio.h>
struct marvellous
{
    int no;
    float f;
    int i;
};

int main()
{
    struct marvellous mobj;
    struct marvrllous *ptr = &mobj;

    ptr->no=11;
    ptr->f=90.99;
    ptr->i=21;

    printf("%d\n",ptr->no);
    printf("%f\n",mobj.no);

    printf("%d\n",sizeof(mobj));
    return 0;
}