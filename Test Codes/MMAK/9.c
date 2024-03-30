#include<stdio.h>

int main()
{
    char s[50]; char t[20] = "desh";
    gets(s);fflush(stdin); int count = 0;


    for(int i = 0; s[i]; i++)
    {
        if(s[i]==t[0])
        {
            int flag = 1;
            for(int j = 0; t[j]; j++)
            {
                if(s[i+j]!=t[j])
                {
                    flag = 0; break;
                }
            }
            if(flag == 1)
            {
                printf("Found at %d\n", i); count++;
            }
        }
    }
    printf("%d", count);
}