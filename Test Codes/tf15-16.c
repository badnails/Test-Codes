#include<stdio.h>

#define min(a,b)(a<b?a:b)
#define min3(a,b,c)(min(a,b)<c?min(a,b):c)
#define min4(a,b,c,d)(min3(a,b,c)<d?min3(a,b,c):d)



struct EPL
{
    char team[20];
    int x;
    int y;
    int z;
    int m;
    int n;
    int o;
};

int fscore(int a, int b)
{
    return a*3 + b*1;
}

void f(int a[])
{

}



int main()
{
    // struct EPL a[20];
    // FILE *fp = fopen("input.txt", "r");
    // for(int i = 0; i<20; i++)
    // {
    //     fscanf(fp, "%s %d %d %d %d %d %d", a[i].team, &a[i].x, &a[i].y, &a[i].z, &a[i].m, &a[i].n, &a[i].o);
    // }

    // int score[20];
    // for(int i = 0; i<2; i++)
    // {
    //     score[i] = fscore(a[i].x, a[i].y);
    // }
    // printf("%d", a[2].n);
    int a = 10;
    double *b;
    b=&a;
    //printf("%d %lf", *b, *b);
    //printf("%p", )
}






void dectoBin(int n)
{
    if(n==0) return;
    dectoBin(n/2);
    printf("%d", n%2);
}
