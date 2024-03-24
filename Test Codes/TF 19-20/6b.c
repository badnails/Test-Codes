#include<stdio.h>

int main()
{
    unsigned n = 4200;
    int mask = 255; int pow =0;
    int a[4];
    for(int i = 0; i<4; i++)
    {
        a[i] = (n>>pow)&mask;
        pow+=8;
    }

    for(int i = 3; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
}