#include<stdio.h>

int main()
{
    int n = 123, x = 8, i = 0; 
    int t = n;
    while(t)
    {
        t/=10; i++;
    }
    int pow = 1;
    for(int j = 0; j<i; j++)
    {
        pow*=10;
    }
    n = n+pow*x;
    printf("%d", n);
}