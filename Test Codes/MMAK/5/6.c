#include<stdio.h>


int main()
{
    int m = 1000;
    int primes[100];int count = 0;
    primes[count++]=2;

    for(int i = 3; i<m; i++)
    {
        if(i%2 == 0) continue;
        int flag = 1;
        for(int j = 3; j*j<i; j=j+2)
        {
            if(i%j == 0)
            {
                flag = 0; break;
            }
        }
        if(flag == 1)
        {
            primes[count++] = i;
        }
    }


    int factors[count];
    for(int i = 0; i<count; i++)
    {
        factors[i] = 0;
    }
    

    int i = 0;
    while(m>1 && i<count)
    {
        if(m%primes[i] == 0)
        {
            factors[i]++;
            m/=primes[i];
        }
        else
            i++;
    }

    for(int i = 0; i < count; i++)
    {
        if(factors[i]!= 0)
            printf("%d - %d times\n",primes[i],factors[i]);
    }
}