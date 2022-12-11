#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000],s1[1000];
    gets(s);
    strcpy(s1,s);
    strrev(s);
    int compare=strcmp(s1,s);
    if(compare==0)
    printf("YES");
    else if(compare!=0)
    printf("NO");


}