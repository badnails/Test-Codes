#include<stdio.h>


void printBin(int n)
{
    if(n>1) printBin(n/2);
    printf("%d",n%2);
}

int getStdId(int m)
{
    int roll; int dept; int yr;
    roll = m%1000;
    m/=1000;
    dept = m%100;
    m/=100;
    yr = m;
    yr = yr + yr*100;

    int stdID = 0;
    stdID = roll | dept<<9 | yr<<18;
    return stdID;
}

int getStdCode(int n)
{
    // int mask = ~(~0<<9);
    // int roll = n&mask;
    // int dept = (n>>9)&mask;
    // mask = ~(~0<<13);
    // int yr = (n>>18)&mask;
    // yr%=100;
    // return yr*100000+dept*1000+roll;
    int stdID = 0;
    stdID = n&((1<<9)-1);
    stdID += ((n>>9)&((1<<9)-1))*1000;
    stdID += (((n>>18)&((1<<13)-1))/100)*100000;
    return stdID;
}

int main()
{
    int n;
    //scanf("%d", &n);
    int m = 2205026;
    // printBin(5);printf("\n");
    // printBin(55);
    int x = getStdCode(getStdId(2205026));
    printf("%d", x);
}