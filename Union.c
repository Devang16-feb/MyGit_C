#include<stdio.h>
#pragma pack(1)

struct Demo
{
    int no;   //4
    float f;  //4
    int data;  //4
    char ch;   //1
};             //13

union Hello
{
    int no;       //4
    float f;      //4
    int data;     //4
    char ch;      //1
};                //4 Higest size consider in union

int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("Size of structure is: %d\n",sizeof(dobj));
    printf("Size of Union is: %d\n",sizeof(hobj));

    hobj.no = 11;
    printf("%d\n",hobj.no);  //11
    printf("%d\n",hobj.data); //21  it will clear prev 11 and overwrite 21 at same memory location
    
    return 0;
}