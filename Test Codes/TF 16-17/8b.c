#include<stdio.h>

int binS(int a[], int l, int h, int v)
{
    int mid = (l+h)/2;
    if(l>h) return -1;
    if(a[mid]>v)binS(a, l, mid -1, v);
    else if(a[mid]<v)binS(a, mid+1, h, v);
    else return mid;
}

int main()
{
    int a[10] = {1, 2, 2, 4, 5, 6, 7, 8, 9, 9};
    printf("%d", binS(a, 0, 9, 7));
}