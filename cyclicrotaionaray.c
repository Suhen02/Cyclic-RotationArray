#include<stdio.h>
int fun(int [],int);
int main()
{
    int arr[10];
    int i,n;
    printf("enter the array size \n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    printf(" %d |",arr[i]);
    }
    fun(arr,n);
}
int fun(int a[10],int n)
{
    int temp[3];
    temp[0]=a[n-1];
    for(int i=0;i<n-1;i++)
    {
      a[n-1-i]=a[n-2-i];
    }
    a[0]=temp[0];
    for(int i=0;i<n;i++)
    {
        printf(" \n%d",a[i]);
    }
   return 0;
}
