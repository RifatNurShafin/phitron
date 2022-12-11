#include<stdio.h>
int powe(int m,int p,int n)
{   if(m>0)
    {
    p=p*n;
    powe(m-1,p,n);
    
    }
    else if(m==0)
    return p;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int p=1;
    printf("%d",powe(m,p,n));

}