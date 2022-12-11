#include<stdio.h>
int sum(int i,int s,int n, int a[])
{   
    
    if(i==n)return s;
    s+=a[i];
    sum(i+1,s,n,a);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s=0;
    printf("%d",sum(0,s,n,a));
}