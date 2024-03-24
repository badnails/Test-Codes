#include<stdio.h>


int find(char* str1, char* str2)
{
    int i = 0; int count = 0;
    while (str1[i])
    {
        int j = 0;
        if(str1[i] == str2[j])
        {
            int flag = 1;
            while(str2[j])
            {
                if(str1[i+j]!=str2[j])
                {
                    flag = 0;
                    break;
                }
                j++;
            }
            if(flag == 1)
            {
                count++;
            }
            i=i+j-1;
        }
        i++;
    }
    return count;
    
}

void lower(char* str1)
{
    int i = 0;
    while(str1[i])
    {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] += 32;
        }
        i++;
    }
}

int main()
{
    char str1[] = "This is a pen";
    char str2[] = "is";
    lower(str1);
    lower(str2);
    printf("%d", find(str1, str2));
}