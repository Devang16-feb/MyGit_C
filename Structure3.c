#include<stdio.h>

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
    struct Student Devang;

    printf("Size of object is: %d\n",sizeof(Amit));

    Amit.RollNo = 11;
    Amit.Div = 'A';
    Amit.Marks = 90.89;
    Amit.Age = 19;
    Amit.Salary = 21000;

    Devang.RollNo = 12;
    Devang.Div = 'B';
    Devang.Marks = 99.89;
    Devang.Age = 19;
    Devang.Salary = 50000;

    printf("Age of Amit is:%d\n",Amit.Age);
    printf("Age of Devang is:%d\n",Devang.Age);

    printf("Marks of Amit is:%f\n",Amit.Marks);
    printf("salary of Devang is:%d\n",Devang.Salary);

    return 0;
}