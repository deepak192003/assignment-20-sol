// Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort( int *p, int size);
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;

}
void sort( int *p, int size)
{
    int temp,i,j;
    for(i=0;i<size-1;i++)
    {
        for(j=i;j<size;j++)
        {
            if( p[i]>p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
}