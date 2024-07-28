#include<stdio.h>

struct Demo
{
    int no;
    int data;
};
int main()
{
    struct Demo obj;
    struct Demo *ptr = &obj;

    return 0;
}