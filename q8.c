// Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
void add( int ptr[20], int );
int main()
{
    int n;
    int sum=0;
    printf("Enter the size of an array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   add(a,n);

}
void add(int *ptr,int n)
{
int i;
     int sum=0;
      for(i=0;i<n;i++)
      {
            sum  =  sum  + *ptr;
            ptr++;
      }
      printf("Sum is %d",sum);
}