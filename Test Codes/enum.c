#include<stdio.h>

enum month
{
    MAR = 3, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC,
    JANUARY = 13, FEBRUARY
};

int main()
{
    char m[20];
    int d, y;
    scanf("%[^,],%d,%d", &m, &d, &y);
    
    char *months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October",
    
}