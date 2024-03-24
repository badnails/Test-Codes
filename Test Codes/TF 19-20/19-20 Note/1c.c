#include<stdio.h>

int main()
{
    int a = 5, b = 2, c= 3;
    switch(a>b&&a>c)
    {
        case 1: printf("a"); break;
        default: printf("0"); break;
    }
}