#include<stdio.h>

int main()
{
    char s[20] = "aikko"; char t[20] = "kko";

    // for(int i = 0; s[i]; i++)
    // {
    //     for(int j = 0; t[j]; j++)
    //     {
    //         if(s[i]==t[j])
    //         {
    //             for(int k = i; s[k]; k++)
    //             {
    //                 s[k]=s[k+1];
    //             }
    //             i--;
    //             break;
    //         }
    //     }
    // }
    int index = 0;
    for(int i = 0; s[i]; i++)
    {
        int flag = 1;
        for(int j = 0; t[j]; j++)
        {
            if(s[i]==t[j])
            {
                flag = 0; break;
            }
        }
        if(flag) s[index++]=s[i];
    }
    s[index]='\0';
    printf("%s", s);
}