#include<stdio.h>
#include<stdlib.h>
    // Manchester United 38 23 11 4 78 37
    // Chelsea 38 21 9 8 69 33 ,
    // Manchester City 38 17 7 14 59 44
    // Arsenal 38 19 11 8 72 43
    // Liverpool 38 16 4 8 55 46
    // Tottenham Hotspur 38 2 8 9 60 33


typedef struct
{
    char team[32];
    int played;
    int won;
    int draw;
    int loss;
    int gs;
    int gc;

}EPL;

void loadFromFile(EPL* epl)
{
    FILE *fp = fopen("clubs.txt", "r");
    int i = 0;
    // while(fscanf(fp, "%s %d %d %d %d %d %d", &epl[i].team, &epl[i].played, &epl[i].won, &epl[i].draw, &epl[i].loss, &epl[i].gs, &epl[i].gc) == 7)
    // {
    //     i++;
    // }
    char temp[80];
    while(fgets(temp, 80, fp) != NULL)
    {
        
    }
    fclose(fp);
}

int* printPosition(EPL* epl)
{
    int *points = (int*)calloc(6, sizeof(int));
    int *pos = (int*)calloc(6, sizeof(int));

    for(int i = 0; i<6; i++)
    {
        points[i]+=3*epl[i].won;
        points[i]+=epl[i].draw;
    }

    for(int i = 0; i<6; i++)
    {
        for(int j = 0; j<6; j++)
        {
            if(points[j]>points[i])
                pos[i]++;
        }
    }

    for(int i = 0; i<6; i++)
    {
        printf("%s %d %d\n", epl[i].team, points[i], pos[i]+1);
    }

    return pos;
}

void storeToFile(EPL* epl, int *pos)
{
    FILE *fp = fopen("positions.txt", "w");
    int points[6]={0};

    for(int i = 0; i<6; i++)
    {
        points[i]+=3*epl[i].won;
        points[i]+=epl[i].draw;
    }
    int j;
    for(int i = 1; i<=6; i++)
    {
        for(j = 0; j<=6; j++)
        {
            if(pos[j]+1==i) break;
        }
        fprintf(fp,"%s %d %d\n", epl[j].team, points[j], pos[j]+1);
    }
}

int main()
{
    EPL epl[6];
    loadFromFile(epl);
    int* pos = printPosition(epl);
    storeToFile(epl, pos);
}