// Write a program to print a string in reverse using a pointer
#include<stdio.h>
int main()
{
    char str[20]="Deepak Kumar";

    reverse(str);
}
void reverse( char *str)
{
    int i;
    for(i=str[i]-1;i>=0;i--)
    {
        printf("%s",*str);
        *str++;
    }
}