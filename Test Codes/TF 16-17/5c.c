#include<stdio.h>

int main()
{
    double*** p = (double***)malloc(sizeof(double**)*10);
    for(int i = 0; i < 10; i++)
    {
        *(p+i) = (double**)malloc(sizeof(double*)*20);
        for(int j = 0; j < 20; j++)
        {
            *(*(p+i)+j) = (double*)malloc(sizeof(double)*30);
        }
    }
}