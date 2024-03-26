#include<stdio.h>

int main()
{
    int n = 60;
    int n1 = 0, n2 = 1;
    int x = n2;
    while(n1<=n)
    {
        x = n1 + n2;
        printf("%d ", n1);
        n1 = n2;
        n2 = x;
    }

}