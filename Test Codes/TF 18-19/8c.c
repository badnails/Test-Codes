#include<stdio.h>
#include<string.h>

void commonSubString(char* s, char* t)
{
    int maxlen = 0;
    int index = 0;
    for(int i = 0; s[i]; i++)
    {
        for(int j = 0; t[j]; j++)
        {
            int k = 0;
            while(s[i+k]==t[j+k] && s[i+k]!='\0' && t[j+k]!='\0')
            {
                k++;
            }
            if(k>maxlen)
            {
                maxlen=k;
                index = i;
            }
        }
    }
    if(maxlen == 0)
    {
        printf("Not Found");return;
    }

    for(int i = index; i<index+maxlen; i++)
    {
        printf("%c", s[i]);
    }
}


char** substringmaker(char *s)
{
    char temp[strlen(s)][strlen(s)];
    for(int i = 0; s[i]; i++)
    {
        strncpy(temp[i], s, i+1);
    }
    for(int i = 0; temp[i]; i++)
    {
        printf("%s\n", temp[i]);
    }
}


int main()
{
    char s[20], t[20];
    gets(s);gets(t);

    substringmaker(s);
    //commonSubString(s, t);


}