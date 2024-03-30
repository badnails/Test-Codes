#include <stdio.h>
int main()
{
    char s[50] = {".......pal....love......"};
    int i = 0, index = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != '.')
        {
            s[index] = s[i];
            index++;
        }
        else if (s[i] == '.' && s[i + 1] != '.')
        {
            s[index++] = s[i];
        }
    }
    s[index] = '\0';
    printf("%s", s);
}