#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    char s[n][30];

    int san[n];
    for(int i = 0; i < n; i++)
    {
        san[i] = 1;
    }

    int k = 0;

    for(int i=0; i<n; i++)
    {
        char temp[30]; 
        scanf("%s", &temp);
        getchar();
        if(strcmp(s[k], temp)==0)
        {
            san[k]++;
        }
        else{
            strcpy(s[k], temp);
            k++;
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%s %d\n", s[i], san[i]);
    } 
}