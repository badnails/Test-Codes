#include<stdio.h>

int main()
{
    FILE* fp = fopen("input.txt", "r");
    FILE* fp2 = fopen("input.txt", "a");

    int sum = 0; int num = 0;
    for(int i = 0; i<4; i++)
    {
        fscanf(fp, "%d", &num);
        sum += num;
    }
    fputc('\n', fp);
    // printf("%d\n", ftell(fp));
    fseek(fp, 0, SEEK_CUR);
    // printf("%d", ftell(fp));
    fprintf(fp2, "%d", sum);
    fclose(fp);
}