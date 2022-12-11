#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==0)
    printf("prime");
    if(c!=0)
    printf("composite");
}