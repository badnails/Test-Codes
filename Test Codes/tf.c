#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//20-21 4(a)


// int main()
// {
//     double*** A = (double***)malloc(sizeof(double**)*10);
//     for(int i = 0; i<10; i++)
//     {
//         *(A+i) = (double**)malloc(sizeof(double*)*20);
//     }
//     for(int i = 0; i<10; i++)
//     {
//         for (int j = 0; j < 20; j++)
//         {
//             *(*(A+i)+j) = (double*)malloc(sizeof(double)*30);
//         }
        
//     }
// }

// int main()
// {
//     short int p[2][3][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; k < 2; k++)
//             {
//                 printf("%p\n", &p[i][j][k]);
//             }
            
//         }
        
//     }
//    printf("%d", ***(p+2)); 
// }



//B040, B042, B044, B046, B048, B04A, B04C, B04E, B050, B052, B054, B056;

int rec(int n)
{
    if(n == 0) return 1;

    return n*rec(n-1)+n;
}

int check(int x)
{
    int i = 1;
    while(1)
    {
        printf("%d\n", rec(i));
        if(rec(i)==x)
        {
            return 1;
        }
        else if(rec(i)>x)
        {
            return 0;
        }
        i++;
    }
}


int main()
{
    // FILE* fp = fopen("input.txt", "r");
    // FILE* fp2 = fopen("output.txt", "a");
    
    // char s[40];


    // while(!feof(fp)){
    //     fscanf(fp, "[^\n]", &s);

    // }
    // fprintf(fp2, "%s\n", s);
    // fprintf(fp2, "%s", s);
    
    // int m;
    // FILE*fp = fopen("input.txt", "r+");


    // for(int i = 0; i<10; i++)
    // {
    //     scanf("%d", &m);
    //     fprintf(fp, "%d ", m);
    // }
    // int max, min, curr;
    // fseek(fp, 0, SEEK_SET);
    // fscanf(fp, "%d", &max);
    // min = max;
   
    // fseek(fp, 0, SEEK_SET);
    // for(int i = 0; i<10; i++)
    // {
    //     fscanf(fp, "%d", &curr);
    //     if(curr>max) max = curr;
    //     if(curr<min) min = curr;
    // }

    // printf("%d %d", max, min);
    
    //20-21 substring

    // char s[] = "abefcdefefdhj";
    // char f[]="ef";
    // int lens = strlen(s);
    // int lenf = strlen(f);
    // printf("%d", lenf);
    // int count = 0;
    // int j = 0;
    // for(int i = 0; i<lens; i++)
    // {
    //     int flag = 0;
    //     if(s[i]==f[j])
    //     {
    //         j++;
    //     }
    //     else
    //     {
    //         j = 0;
    //     }
    //     if(j==lenf-1)
    //     {
    //         j = 0;
    //         count++;
    //     }
    // }
    
    if(check(446)==1)
        printf("Yes");
    else
        printf("No");

}