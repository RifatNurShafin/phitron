#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    int temp;
    
    for(j=0;j<n;j++)
    {
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;}

    }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}