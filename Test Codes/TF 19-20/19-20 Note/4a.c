#include<stdio.h>

int main()
{
    char s[30] = "Search within this";
    char w[20] = "rae";

    int x = 0;
    while(w[x])x++;
    --x;
    int flag = 0;
    for(int i = 0; s[i]; i++)
    {
        flag = 1;
        if(s[i] == w[x])
        {
            for(int j = x; j>=0; j--)
            {
                
                if(s[i+x-j] != w[j])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                printf("%d", i); break;
            }
        }
    }
    if(flag == 0) printf("Not found");
}