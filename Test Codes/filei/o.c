#include<stdio.h>

typedef struct
{
    int id;
    int temp[365];
    int hum[365];
    int rain[365];
}District;



int main()
{

    District districts[64];

    FILE *fp = fopen("out.txt", "r");
    int m, n, o, p, q, r;
    int arr[3] = {0};
    while(fscanf(fp, "%d %d %d %d %d %d", &m, &n, &o, &p, &q, &r) == 6)
    {
        districts[m-1].temp[n-1]+=o; 
    }
    printf("%d", arr[0]);
}