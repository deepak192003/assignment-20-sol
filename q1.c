// Write a function to swap values of two in variables of calling function.
#include<stdio.h>
void sort(int *,int *);
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    sort(&x,&y);
    printf("After swapping value of x and y is %d and %d",x,y);
    return 0;
}
void sort(int *p ,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}