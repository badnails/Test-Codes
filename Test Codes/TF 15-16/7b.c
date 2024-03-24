#include<stdio.h>

struct find
{
    int n:8;
}n;


int main()
{
    n.n = 128;
    printf("%d", n.n);

}