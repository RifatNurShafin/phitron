#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    int x,y,sum,sub,mul;
    float div;
    if(ch=='+')
    {
       scanf("%d%d",&x,&y);
       sum=x+y;
       printf("%d",sum);

    }
    else if(ch=='-')
    {
       scanf("%d%d",&x,&y);
       sub=x-y;
       printf("%d",sub);
    }
    else if(ch=='*')
    {
       scanf("%d%d",&x,&y);
       mul=x*y;
       printf("%d",mul);
    }
    else if(ch=='/')
    {
       scanf("%d%d",&x,&y);
       div=x/(float)y;
       printf("%f",div);
    }
}