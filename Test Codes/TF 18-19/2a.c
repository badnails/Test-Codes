#include<stdio.h>
#include<string.h>

typedef struct
{
    char name[20];
    int roll;
    char grade;
}St;



float classavg(St* x, int n)
{
    float avg = 0;
    for(int i = 0; i<n; i++)
    {
        switch(x[i].grade)
        {
            case 'A':
                avg += 4;
                break;
            case 'B':
                avg += 3;
                break;
            case 'C':
                avg += 2;
                break;
            case 'D':
                avg += 1;
                break;
            case 'E':
                avg += 0;
                break;
        }
    }
    avg/=n;
    return avg;
}


int main()
{
    int n = 5;
    St myst[n];
    for(int i = 0; i<5; i++)
    {
        char temp[20];
        scanf("%s %d %c", &temp, &myst[i].roll, &myst[i].grade);
        strcpy(myst[i].name, temp);

    }

    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(myst[i].grade == myst[j].grade)
            {
                if(strcmp(myst[i].name, myst[j].name)>=1)
                {
                    St temp = myst[i];
                    myst[i] = myst[j];
                    myst[j] = temp;
                }
            }
            else{
                if(myst[i].grade > myst[j].grade)
                {
                    St temp = myst[i];
                    myst[i] = myst[j];
                    myst[j] = temp;
                }
            }
        }
    }
    printf("\n\n");
    for(int i = 0; i<n; i++)
    {
        
        printf("%s %d %c\n", myst[i].name, myst[i].roll, myst[i].grade);
    }
    printf("%f", classavg(myst, n));
}