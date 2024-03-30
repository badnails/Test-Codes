#include<stdio.h>
#include<string.h>

int main()
{
    char s[100] = "race";
    int n = strlen(s);

    int flag = 1;
    for(int i = 0; i < n/2; i++)
    {
        if(s[i] != s[n-1-i])
        {
            printf("No");
            flag = 0;
            break;
        }
    }
    if(flag == 1)printf("Yes");

    if(flag == 0)
    {
        for(int i = n-2; i >= 0; i--)
        {
            s[2*n-2-i] = s[i];
        }
        
    }

    printf("\n%s", s);


}