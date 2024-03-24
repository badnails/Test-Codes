#include<stdio.h>

int main()
{
    int x, n;
    scanf("%d %d", &x, &n);

    if(x%2 == 0) x+=1;
    for(int i = 0; i<n; i++)
    {
        printf("%d ", x);
        x+=2;
    }
}