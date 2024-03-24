#include<stdio.h>

int main()
{
    int i=0;
    if(++i)
    {
        int i = 50;
        printf("%d",i++);
    }
    printf("%d", i);
}