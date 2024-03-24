#include<stdio.h>

int main()
{
    int n = 6;
    int primes[100];int count = 0;
    primes[count++]=2;
    int factors[100];
        for(int i = 0; i<100; i++)
        {
            factors[i] = 0;
        }

    for(int i = n; i>2; i--)
    {
        for(int i = 3; i<n; i++)
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
    }
}