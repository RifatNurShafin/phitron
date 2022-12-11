#include<stdio.h>
int fun(int s,int n)
{
    if(n>0)
    {
        s=s+n;
        fun(s,n-1);
    }
    else if(n==0)
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    int s=0;
    printf("%d",fun(s,n));
}