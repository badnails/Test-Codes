#include<stdio.h>


double sina(int deg)
{
    double rad = deg*3.1416/180;
    double val = 0; int sign = -1;
    double f = 1;

    for(int i = 1; f>=0.001 ; i++)
    {
        sign*=-1; double pow = 1;
        for(int j = 1; j<= 2*i-1; j++)
        {
            pow*=rad;
        }
        int fact = 1;
        for(int k = 1; k<=2*i-1; k++)
        {
            fact*=k;
        }
        f = pow/fact;
        val+=(sign*pow/fact);
        printf("%lf\n", val);

    }

    return val;



}


int main()
{
    printf("%lf", sina(30));
}