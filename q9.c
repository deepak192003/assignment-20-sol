//  Write a program to print the elements of an array in reverse order.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int a[n];
    int i;
    printf("Enter the elements: ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
reverse(a,n);

}
void reverse(int *ptr,int n)
{
    int i;

    for(i=n-1;i>=0;i--)
    {
        printf("%d",*ptr);
        *ptr--;
    }

}