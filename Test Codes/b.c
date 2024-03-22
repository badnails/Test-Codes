#include <stdio.h>
#include <stdlib.h>

int comparing(char *str1, char *str2);
char **strTokenize(char *str, char delim);
void _printTokens(char **tokens);
void _printTokensUnique(char **tokens);
void _freeTokens(char **tokens);

int main(int argc, char **args)
{
    int string_length;
    scanf("%d", &string_length);

    char delim;
    scanf(" %c", &delim);

    char *str = (char *)malloc(sizeof(char) * (string_length + 1));
    scanf("%s", str);
    //vong chong
    char **tokens = strTokenize(str, delim);
    _printTokens(tokens);
    _printTokensUnique(tokens);
    _freeTokens(tokens);
    free(str);

    return 0;
}

char **strTokenize(char *str, char delim)
{
    char **tokens = (char **)malloc(sizeof(char *));
    int count = 0;
    char *position = str;

    while (*str != '\0')
    {
        if (*str == delim)
        {
            int len_each = str - position + 1;
            tokens = (char **)realloc(tokens, sizeof(char *) * (count + 1));
            *(tokens + count) = (char *)malloc(len_each * sizeof(char));

            for (int i = 0; i < len_each - 1; i++)
            {
                *(*(tokens + count) + i) = *(position + i);
            }
            *(*(tokens + count) + len_each - 1) = '\0';

            count++;
            position = str + 1;
        }
        str++;
    }

    // Handle the last token outside the loop
    int len_last = str - position;
    tokens = (char **)realloc(tokens, sizeof(char *) * (count + 1));
    *(tokens + count) = (char *)malloc((len_last + 1) * sizeof(char));

    for (int i = 0; i < len_last; i++)
    {
        *(*(tokens + count) + i) = *(position + i);
    }
    *(*(tokens + count) + len_last) = '\0';
    count++;

    tokens = (char **)realloc(tokens, sizeof(char *) * (count + 1));
    
  *(tokens + count) = '\0';

    return tokens;
}

void _printTokens(char **tokens)
{
    printf("The tokens are:\n");
    int j = 0;
    while (*(tokens + j) != NULL)
    {
        if (*(*(tokens + j) + 0) != '\0')
        {
            printf("%s\n", *(tokens + j));
        }
        j++;
    }
}

void _printTokensUnique(char **tokens)
{
    int i = 0;
    printf("The unique tokens are:\n");
    while (*(tokens + i) != NULL)
    {
        if (*(*(tokens + i) + 0) != '\0')
        {
            int flag = 0;
            for (int j = 0; j < i; j++)
            {
                int x = comparing(*(tokens + i), *(tokens + j));
                if (x == 1)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
            {
                printf("%s\n", *(tokens + i));
            }
        }
        i++;
    }
}

void _freeTokens(char **tokens)
{
    int i = 0;
    while (*(tokens + i) != NULL)
    {
        free(*(tokens + i));
        i++;
    }
    free(tokens);
}

int comparing(char *str1, char *str2)
{
    return strcmp(str1, str2) == 0;
}
