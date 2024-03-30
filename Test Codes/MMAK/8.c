#include<stdio.h>

int main()
{
    int n; scanf("%d", &n);fflush(stdin);
    char **s; s = (char**)malloc(sizeof(char*)*n);
    for(int i = 0; i < n; i++)
    {
        s[i] = (char*)malloc(sizeof(char)*100);
    }
    for(int i = 0; i < n; i++)
    {
        gets(s[i]);fflush(stdin);
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(strcmpi(s[i], s[j])>0)
            {
                char *temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        puts(s[i]);
    }
}