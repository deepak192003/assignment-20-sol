// Write a program to calculate the length of the string using a pointer
#include<stdio.h>
void length(char *);
int main()
{
    char str[20]="Deepak";
    int l;
    length(str);
}
void length(char *str)
{
    int i;
    for(i=0;str[i];i++);
    printf("%d",i);
}