#include<stdio.h>

void encode(char* s)
{
    for(int i = 0; s[i]; i++)
    {
        if(s[i] == ' ') s[i] = ' '+2;
        else s[i] = (s[i]-'a'+2)%26 +'a';
    }
}

void decode(char *s)
{
    for(int i = 0; s[i]; i++)
    {
        if(s[i]==' '+2) s[i]=' ';
        else s[i] = (s[i]-'a'-2+26)%26 +'a';
    }
}




int main()
{
    char s[32];
    gets(s);
    encode(s);
    printf("\n%s\n", s);
    decode(s);
    printf("%s", s);
}