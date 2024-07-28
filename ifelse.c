#include<stdio.h>
int main()
{
    int standard=0;
    printf("Enter your standard:\n");
    scanf("%d",&standard);

    if(standard==1){
        printf("Exam at 7AM !!\n");
    }
    else if(standard==2){
        printf("Exam at 8AM !!\n");
    }
    else if(standard==3){
        printf("Exam is at 9AM !!\n");
    }
    else if(standard==4){
        printf("Exam is at 10AM !!\n");
    }
    else{
        printf("wrong Standard !!");
    }
    return 0;
}