#include<stdio.h>
#include<stdlib.h>


int isalpha(char c)
{
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        return 1;
    }
    return 0;
}




void spaceKhabo(char *s)
{
    // int i = 0; int j = 0;
    // while(s[i]==' ')
    // {
    //     i++;
    // }
    // while(s[i])
    // {
    //     s[j]=s[i];
    //     j++;
    //     i++;
    // }
    // s[j] = '\0';

    // i=0; j = 0;
    // while(s[i])
    // {
    //     i++;
    // }
    // i--;
    // while(s[i]==' ')
    // {
    //     i--;
    // }
    // s[i+1]='\0';

    int i = 0, index = 0;
    for(i = 0; s[i]; i++)
    {
        if(isalpha(s[i]))
        {
            s[index++] = s[i];
        }
        else if(s[i]==' ' && isalpha(s[i+1]) && index!=0)
        {
            s[index++] = s[i];
        }
    }
    s[index] = '\0';
    
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