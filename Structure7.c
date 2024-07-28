#include<stdio.h>
struct Hello
{
    int no;
    float f;
}
struct Demo
{
    int Data;             // 4 Byte
    struct Hello hobj;   // 8 Byte
};

int main()
{
    struct Demo dobj;
    dobj.data =11;
    dobj.hobj.no=21;
    dobj.hobj.f=90.99;

    return 0;
}