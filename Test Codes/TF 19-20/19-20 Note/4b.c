#include<stdio.h>

int main()
{
    char s[50] = "    Hijibiji word onekgula akjds akjda  acask uien    ";
    int count = 0;
    int i = 0;
    for(i = 0; s[i]; i++)
    {
        if(s[i]!=' ' && s[i+1]==' ')
        {
            count++;
        }
    }
    if(s[i-1]!=' ') count++;
    printf("%d",count);

}