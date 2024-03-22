#include<stdio.h>

int main()
{
    char c = 'F';
    printf("%c", (c+2-65)%26+97);
}