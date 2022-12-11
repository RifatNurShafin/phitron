#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,c;
    for(r=1;r<=n;r++)
    {   
        for(c=1;c<=n-r;c++)
        {
            printf(" ");
        }
        for(c=1;c<=n;c++)
        {
            printf("*");
        }printf("\n");
    }
}