#include<stdio.h>


int recStrCmp(char* s, char* t, int n)
{
    if(*(s + n)=='\0' && *(t+n)=='\0') return 0;
    if(*(s + n)=='\0') return -1;
    if(*(t + n)=='\0') return 1;
    if(*(s+n)<*(t+n)) return -1;
    if(*(s+n)>*(t+n)) return 1;
    recStrCmp(s, t , n+1);
}


int main()
{
    char s[]="abc";
    char t[]="aba";
    printf("%d", recStrCmp(s, t, 0));
}