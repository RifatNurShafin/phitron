#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    int max,c=0;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];

    }
    int a2[max+1];
    for(i=0;i<=max;i++)
    {
        a2[i]=0;

    }
    for(i=0;i<n;i++)
    {
        a2[a[i]]+=1;

    }
    for(i=1;i<=max;i++)
    {
        if(a2[i]==1)
        {c++;
        if(c==k)
        printf("%d",i);
        }
    }
    

}