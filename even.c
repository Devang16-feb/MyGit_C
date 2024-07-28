#include<stdio.h>
int main(){
    int num=0;
    int ans=0;
    printf("Enter the num:\n");
    scanf("%d",&num);
    ans=num%2;

    if(ans==0){
        printf("Even !!");
    }
    else{
        printf("Odd !!");
    }
    return 0;
}