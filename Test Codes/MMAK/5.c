#include<stdio.h>

int main()
{
    char s[10] = "21-10-2000";
    int day = 0, month = 0, year = 0, pow = 1;
    int start = 0; int i;
    for(i = start; s[i+1]!='-' && s[i+1]!='\0', i++)
    {
        i++;
    }
    int k = 0;
    while(i>=start)
    {
        day += pow*((int)s[i]-'0');
        pow*=10;
        i--;
    }
    for(i = start; s[i+1]!='-' && s[i+1]!='\0', i++)
    {
        i++;
    }
}