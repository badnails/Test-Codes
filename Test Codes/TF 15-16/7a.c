#include<stdio.h>

int main()
{
    FILE *file = fopen("positions.txt", "rb");
    fseek(file, 0, SEEK_END);
    printf("%d", ftell(file));
}