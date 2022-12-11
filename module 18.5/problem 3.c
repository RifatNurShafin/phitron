#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,rem,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
       rem=a[i]%10;
       sum=sum+rem; 
    }
    printf("sum= %d",sum);
    
}