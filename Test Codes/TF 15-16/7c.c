#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void *mymalloc(int size)
{
    int* ptr = (int*)malloc(sizeof(int)*size);
    memset(ptr, 1, sizeof(int)*size);
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr+i));
    }
    return ptr;
}


void myrealloc(void *x, int old, int new)
{
    int* ptr = (int*)malloc(sizeof(int)*new);
    memset(ptr, 0, sizeof(int)*new);
    memcpy(ptr, x, sizeof(int)*old);
    for(int i = 0; i < new; i++)
    {
        printf("%d ", *(ptr+i));
    }
}


int main()
{
    int *x = mymalloc(10);
    myrealloc(x, 10, 20);



    //my chaanged code
}