#include<stdio.h>

int main()
{
    FILE* fr = fopen("input.txt", "r");
    FILE* fw = fopen("output.txt", "w");

    char c;
    while((c=fgetc(fr) )!= EOF)
    {
        fputc(c, fw);
    }
    rewind(fr);
    while((c=fgetc(fr) )!= EOF)
    {
        fputc(c, fw);
    }
}