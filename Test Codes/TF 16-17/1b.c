#include<stdio.h>

void rec(int n, int x)
{
    if(n==0) return;
    rec(n/1000, x);
    
    printf("%d", n%1000);
    if(n!=x) printf(",");
    
}



int main()
{
    int a = -1236794;
    if(a<0) a=-a;
    printf("-");
    rec(a,a);
    
}