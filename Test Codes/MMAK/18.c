#include<stdio.h>

int main()
{
    char s[100]; gets(s); fflush(stdin);

    int flag = 1; int index = 0;
    for(int i = 0; s[i]; i++)
    {
        if(s[i]=='/' && s[i+1] == '*')
        {
            flag = 0;
            i++;
        }
        else if(s[i]=='*' && s[i+1] == '/')
        {
            flag = 1;
            i+=2;
        }
        else if(s[i]=='/' && s[i+1] == '/')
        {
            flag = 0;
            i++;
        }

        if(flag == 1) s[index++] = s[i];

    }
    s[index] = '\0';
    printf("%s", s);

}