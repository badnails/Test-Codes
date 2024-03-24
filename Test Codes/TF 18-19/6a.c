#include<stdio.h>

int largest(int a[], int n)
{
    if(n == 1) return a[n-1];
    int max = largest(a, n-1);
    if(a[n-1]>max) return a[n-1];
    else return max;
}


int main()
{
    int a[10]={3,7,8,10,3,4,9,-1,0};
    int x=largest(a,10);
    printf("%d",x);
}