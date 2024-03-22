#include<stdio.h>

int isPowerof5(int n)
{
    int pow = 1;
    // while(1)
    // {
    //     pow *= 5;
    //     if(pow == n) return 1;
    //     else if(pow>n) return 0;
    // }
    double x = n;
    while(1)
    {
        if(x/5==1 && x-(int)x==0) return 1;
        else if(x == 0) return 0;
    }
}


int main()
{
    printf("%d", isPowerof5(50));
}