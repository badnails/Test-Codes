#include<stdio.h>

int main()
{
    int mat[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i = 0; i < 4; i++)
    {
        int avg = 0;
        for(int j = 0; j < 3; j++)
        {
            avg += mat[j][i];
        }
        printf("%d\n", avg/3);
    }
}