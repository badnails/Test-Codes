#include<stdio.h>

int main()
{
    int n; scanf("%d ", &n);
    int lengths[n];
    int numLengths[n];
    for(int i = 0; i<n; i++)
    {
        lengths[i] = 0;
        numLengths[i] = 0;
    }
    int index = 0;

    for(int i = 0; i<n; i++)
    {
        char temp[50]; scanf("%s", temp);fflush(stdin);
        int len = strlen(temp);
        int flag = 1;
        for(int j = 0; j<index; j++)
        {
            if(lengths[j] == len)
            {
                numLengths[j]++;
                flag = 0; break;
            }
        }
        if(flag)
        {
            lengths[index] = len;
            numLengths[index]++;
            index++;
        }
    }
    for(int i = 0; i<index; i++)
    {
        printf("%d - %d   ", lengths[i], numLengths[i]);
        for(int j = 0; j<numLengths[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}