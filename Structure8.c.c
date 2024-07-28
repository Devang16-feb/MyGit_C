#include<stdio.h>

struct Demo
{
    int Data;             // 4 Byte
    struct Hello
    {
       int no;
       float f;
    } hobj;
};

int main()
{
    struct Demo dobj;
    dobj.data =11;
    dobj.hobj.no=21;
    dobj.hobj.f=90.99;

    return 0;
}