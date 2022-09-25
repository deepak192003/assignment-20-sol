// Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
void maximum(int *,int *);
int main()
{
    int a,b;

    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    maximum(&a,&b);
    
}
void maximum(int *p,int *q)
{
    if(*p>*q)
    {
        printf("%d is greater",*p);
    }
    else
    {
        printf("%d is greater",*q);
    }
}