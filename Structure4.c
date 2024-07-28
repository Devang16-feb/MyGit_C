#include<stdio.h>
#pragma pack(1)
//Allocated() Memory )1 Byte At time
struct Student
{
    int RollNo;
    char Div;
    int Age;
    float Marks;
    int Salary;
};
int main()
{
    struct Student Amit;
    

    printf("Size of object is: %d\n",sizeof(Amit));

   
    
    return 0;
}