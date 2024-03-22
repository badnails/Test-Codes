#include<stdio.h>


void unioni(int a[], int b[], int c[], int m, int n)
{
    int cin = 0;
    for(int i = 0; i < m; i++)
    {
        int flag = 0;
        for(int j = 0; j < cin; j++)
        {
            if(a[i]==c[j])
            {
                flag = 1;
                break;
            }

        }
        if(flag == 0)
        {
            c[cin] = a[i];
            cin++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        int flag = 0;
        for(int j = 0; j < cin; j++)
        {
            if(b[i]==c[j])
            {
                flag = 1;
                break;
            }

        }
        if(flag == 0)
        {
            c[cin] = b[i];
            cin++;
        }
    }
}

void intersect(int a[], int b[], int c[], int m, int n)
{
    int cin = 0;
    for(int i = 0; i < m; i++)
    {
        int flag = 0;
        for(int j = 0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                for(int k = 0; k<cin; k++)
                {
                    if(a[i] == c[k])
                    {
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                {
                    c[cin] = a[i];
                    cin++;
                    break;
                }
            }
        }
    } 
}


int main()
{
    int a[10]={1,1,2,3,4,5,6,6,0,1};
    int b[10]={12,13,14,1,18,6,20,21};
    int c[20]={-1};
    for(int i = 0; i < 20; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    intersect(a,b,c, 10, 8);
    for(int i = 0; i < 20; i++)
    {
        printf("%d ", c[i]);
    }
}