#include<stdio.h>



int isequal(int x, int y)
{
    return x^y;
}

int copyabit(int x, int n)
{
    x=x&(1<<n-1);
    x<<=32-n;
    x>>=31;
    return x;
}

int isnegative(int x)
{
    return (-1)*(x>>=31);
}

int isSmaller(int x, int y)
{
    return (x-y)>>31;
}

int invertbits(int x, int p, int n)
{
    int mask = ~(~0<<n);
    mask<<=p-n+1;
    return x^mask;
}


int main()
{
    int a = 1678;
    int b = 1231345;
    printf("%d", invertbits(5, 5, 3));

}