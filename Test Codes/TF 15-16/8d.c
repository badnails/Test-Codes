#include<stdio.h>

int main()
{
    int* arr[7];
    for(int i = 0; i<=3; i++)
    {
        arr[i] = (int*)malloc((2*i+1)*sizeof(int));
    }
    for(int i = 4; i<7; i++)
    {
        arr[i] = (int*)malloc(((7-i)*2-1)*sizeof(int));
    }

    int** x = (int**) malloc(sizeof(int*)*7);
    for(int i = 0; i<7; i++)
    {
        if(i<4)
        {
            *(x+i) = (int*)malloc(sizeof(int*)*(2*i+1));
        }
        else
        {
            *(x+i) = (int*)malloc(sizeof(int*)*((7-i)*2-1));
        }
    }

}