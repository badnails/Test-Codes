#include<stdio.h>

int main()
{
    char str[26];char c;
    scanf("%s %c",str, &c);
    int i = 0;
    while(str[i])
    {
        if(str[i] == c)
        {
            int k = i;
            while(str[k])
            {
                str[k]=str[k+1];
                k++;
            }
            str[k]='\0';
        }
        i++;
    }
    printf("%s",str);
}