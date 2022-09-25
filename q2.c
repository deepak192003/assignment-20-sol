// Write a function to swap strings of two char arrays of calling functions.
#include<stdio.h>
#include<string.h>
void swap( char **p,char **q);
int main()
{
    char *a[10],*b[10];
    printf("Enter two string");
    fflush(stdin);

    gets(a);
   
    gets(b);
    swap(&a,&b);
    printf("%s %s",a,b);
    return 0;
}
void swap( char **p,char **q)
{
    char *temp;
    temp=*p;
    *p=*q;
    *q=temp;
}