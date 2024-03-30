#include<stdio.h>


typedef union bits
{
    float a;
    char c[4];
}bits;


int main()
{
    bits x;
    x.a = 10;

    for(int j = 3; j>=0; j--)
    {
        for(int i = 7; i>=0; i--)
        {
            printf("%d", (x.c[j]>>i)&1);
        }
        
    }
}