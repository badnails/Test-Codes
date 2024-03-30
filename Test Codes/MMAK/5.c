#include<stdio.h>

int main()
{
    char s[10] = "21-10-2001";
    int day = 0, month = 0, year =0,flag=1;
    for(int i=0;i<10;i++)
    {
        if(s[i]=='-')
        {
            flag++;
            continue;
        }
        if(flag==1)
        {
            day = day*10 + (s[i]-'0');
        }
        else if(flag==2)
        {
            month = month*10 + (s[i]-'0');
        }
        else if(flag==3)
        {
            year = year*10 + (s[i]-'0');
        }
    }
    printf("%d %d %d", day, month, year);
}