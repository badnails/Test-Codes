#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fr = fopen("29.c", "rb");
    FILE* fw = fopen("input.txt", "wb");
    fseek(fr, 0, SEEK_END);
    int pos = ftell(fr);
    while(--pos>0)
    {
        fseek(fr, pos, SEEK_SET);
        char c = fgetc(fr);
        fputc(c, fw);
    }

}
