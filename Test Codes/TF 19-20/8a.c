#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
    char filein[20], fileout[20];
    strcpy(filein, argv[1]);
    strcpy(fileout, argv[2]);

    FILE *fin = fopen(filein, "r");
    FILE *fout = fopen(fileout, "w");
    char c;
    while(fscanf(fin, "%c", &c)==1)
    {
        fprintf(fout, "%c", c);
    }
}