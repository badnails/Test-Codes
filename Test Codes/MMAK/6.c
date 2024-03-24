#include<stdio.h>
#include<stdlib.h>

void spaceKhabo(char *s)
{
    int i = 0; int j = 0;
    while(s[i]==' ')
    {
        i++;
    }
    while(s[i])
    {
        s[j]=s[i];
        j++;
        i++;
    }
    s[j] = '\0';

    i=0;
    while(s[i])
    {
        i++;
    }
    i--;
    while(s[i]==' ')
    {
        i--;
    }
    s[i+1]='\0';
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    char *s[n];
    for(int i = 0; i < n; i++)
    {
        s[i] = (char*)malloc(sizeof(char)*100);
    }

    for(int i = 0; i < n; i++)
    {
        gets(s[i]);
    }

    for(int i = 0; i < n; i++)
    {
        spaceKhabo(s[i]);
    }

    for(int i = 0; i<n; i++)
    {
        printf("%s\n", s[i]);
    }

    int max = 0, ind = 0;
    for(int i = 0; i < n; i++)
    {
        if(strlen(s[i])>max)
        {
            max = strlen(s[i]);
            ind = i;
        }
    }

    printf("%s\n", s[ind]);
    printf("%d", strlen(s[ind]));

    
}