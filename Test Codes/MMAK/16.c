#include<stdio.h>

int main()
{
    char s[100];
    gets(s);
    int count = 0;
    for(int i = 0; s[i]; i++)
    {
        if(s[i] == '(') count++;
        else if(s[i] == ')') count--;
    }
    if(count!=0)
    {
        printf("Invalid input");
        return 0;
    }
}