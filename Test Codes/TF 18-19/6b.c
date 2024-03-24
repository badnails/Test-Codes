#include<stdio.h>


void printbin(unsigned n)
{
    if(n > 1)   printbin(n/2);
    
    printf("%d", n%2);
}


int main()
{
    printbin(20);
}