#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    a[0]=0;
    a[1]=1;
    for(i=0;i<n;i++)
    {
       a[i+2]=a[i]+a[i+1];
    }
     for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
}