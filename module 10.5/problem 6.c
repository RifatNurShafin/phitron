#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,c;
    for(r=n;r>=1;r--)
    {   
        for(c=0;c<n-r;c++)
        {
            printf(" ");
        }
        for(c=1;c<=r;c++)
        {
            printf("%d ",c);
        }printf("\n");
    }
}