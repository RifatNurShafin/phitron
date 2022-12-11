#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    gets(s);
    int l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]!=s[i+1])
        {
            printf("%c",s[i]);
        }
        else if(s[i]==s[i+1])
        {
            continue;
        }
    }
}