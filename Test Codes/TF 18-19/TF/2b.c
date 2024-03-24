#include<stdio.h>

struct test
{
    unsigned a:1;
    unsigned b:2;
    unsigned c:3; 
};

struct x
{
    char a;
    float b;
    char c;
};

int main()
{
    // int i;
    // struct test t;
    // for(int i = 0; i <8; i++)
    // {
    //     t.c=t.b=t.a=i;
    //     printf("a = %d, b = %d, c = %d\n", t.a, t.b, t.c);
    // }

    printf("%d", sizeof(struct x));
}