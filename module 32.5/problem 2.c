#include<stdio.h>
int fun(int j,int s,int n,int a[])
{
    int rem;
    
       if(j<n)
       { 
        rem=a[j]%10;
        s=s+rem;
        fun(j+1,s,n,a);
       }
       else if(j==n)
       return s;
    
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
    int s=0,j=0;
    printf("%d",fun(j,s,n,a));
}