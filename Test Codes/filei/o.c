#include<stdio.h>

typedef struct
{
    int id;
    int temp[10];
    int hum[10];
    int rain[10];
}District;

int main()
{

    District districts[5];

    FILE *fp = fopen("out.txt", "r");
    FILE* ft = fopen("temp.txt", "w");
    FILE* fh = fopen("hum.txt", "w");
    FILE* fr = fopen("rain.txt", "w");
    int m, n, o, p, q;
    
    while(fscanf(fp, "%d %d %d %d %d", &m, &n, &o, &p, &q) == 5)
    {
        districts[m-1].id = m;
        districts[m-1].temp[n-1]+=o;
        districts[m-1].hum[n-1]+=p;
        districts[m-1].rain[n-1]+=q; 
    }


    int avg_temp = 0;
    int avg_hum = 0;
    int avg_rain = 0;
    for(int i = 0; i<64; i++)
    {
        for(int j = 0; j<10; j++)
        {
            avg_temp += districts[i].temp[j];
            avg_hum += districts[i].hum[j];
            avg_rain += districts[i].rain[j];
        }
        avg_temp /= 10;
        avg_hum /= 10;
        avg_rain /= 10;
        fprintf(ft, "%d %d\n", districts[i].id, avg_temp);
        fprintf(ft, "%d %d\n", districts[i].id, avg_hum);
        fprintf(ft, "%d %d\n", districts[i].id, avg_rain);
    }
}