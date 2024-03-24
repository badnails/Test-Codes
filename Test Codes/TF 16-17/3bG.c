#include<stdio.h>

int fgcd(int x, int y)
{
    if(y == 0) return x;
    if(x<0) x=-x;
    return fgcd(y, x%y);
}

int main()
{
    int x[5] = {12, 18, 24, 36, 48};
    int gcd = x[0]; int lcm;
    for(int i = 1; i<5; i++)
    {
        lcm = x[i]*gcd/fgcd(gcd, x[i]);
        gcd = fgcd(gcd, x[i]);
    }
    printf("%d", lcm);
}