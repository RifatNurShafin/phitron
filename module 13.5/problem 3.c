#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    gets(s);
    int l=strlen(s);
    int i,vc=0,cc=0;
    for(i=0;i<l;i++)
    {   if(s[i]>='a'&&s[i]<='z')
        {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
         vc++;
        }
        else
        cc++;
        }
    }
    printf("%d\n",vc);
    printf("%d",cc);
}