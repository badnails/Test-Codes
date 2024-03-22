#include<stdio.h>
#include<ctype.h>

char *strncat(char *dest, char* src, size_t n)
{
    int i = 0;
    while(*(dest+i))
        i++;
    int j = 0;
    while(n  && *(src+j))
    {
        *(dest+i) = *(src+j);
        i++;j++;n--;
    }
    *(dest+i)='\0';
    return dest;
}

char *strchra(char *str, char c)
{
    for(int i = 0; *(str+i); i++)
    {
        if(*(str+i)==c)
            return "found";
    }
    return "Not found";
}

int strcmpa(char* str1, char* str2)
{
    int i, j;
    i=j=0;
    while(*(str1+i))
    {
        i++;
    }
    while(*(str2+j))
    {
        j++;
    }
    if(i!=j) return 0;
    i=j=0;
    while(*(str1+i))
    {
        if(*(str1+i)>*(str2+i))
        {
            return 2;
        }
        else if(*(str1+i)<*(str2+i))
        {
            return -1;
        }
        i++;
    }
    return 1;

}

int strlen(char* str)
{
    int i = 0;
    while(*(str+i))
        i++;
    return i;
}

int strstr(char* h, char* n)
{
    int i = 0, count = 0;
    while(*(h+i))
    {
        int j = 0;
        if(*(h+i)==*n)
        {
            int flag = 0;
            while(*(n+j))
            {
                
                if(*(h+i+j)!=*(n+j))
                {
                    flag = 1;
                    break;
                }
                j++;
            }
            if(flag == 0)
            {
                count++;
                i=i+j-1;
            } 
        }
        i++;
    }
    return count;
}

int main()
{
    char d[20] = "Zacacbaac";
    char s[10] = "ac";
    //char *t = strncat(d,s,2);
    //printf("%s", strchra("abc", 'z'));
    //strcmpa(d,s);
    printf("%d", strstr(d,s));


}