#include<stdio.h>


int fibonacci(int n)
{
    if(n=1) return n;

    return fibonacci(n-1) + fibonacci(n-2) + fibonacci(n-3);
}

int main()
{
    int n = 10;
    int n1 = 0, n2 = 1, n3;
    int arr[100]; int i = 0;
    while(n1<=n)
    {
        arr[i] = n1;
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        i++;
    }
    //for(int i = 1; i<=n; i++)
    {
        printf("%d ", fibonacci(0));
    }

}