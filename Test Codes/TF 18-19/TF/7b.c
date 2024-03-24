#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int* a = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d", a+i);
    }
    int max = *(a);
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max) max = a[i];
    }
    int min = *(a);
    for(int i = 0; i < n; i++)
    {
        if(a[i] < min) min = a[i];
    }
    printf("%d %d" ,max, min);
    printf("%d", max-min);
}