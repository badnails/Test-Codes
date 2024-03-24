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
    int mask = ~(~0<<9);
    int roll = n&mask;
    int dept = (n>>9)&mask;
    mask = ~(~0<<13);
    int yr = (n>>18)&mask;
    yr%=100;
    return yr*100000+dept*1000+roll;
}

int main()
{
    int n;
    //scanf("%d", &n);
    int m = n;
    printBin(5);printf("\n");
    printBin(55);
    //printf("\n%d", getStdCode(getStdId(m)));

}