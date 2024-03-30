#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{
    char name[32];
    int a; int b; int c; int d;
}st;

int main()
{

                                        // FILE* fw = fopen("input.txt", "w");
                                        // char name[32]; int a, b, c, d;
            //Using File                // for(int i = 0; i<3; i++)
                                        // {
                                        //     gets(name);
                                        //     scanf("%d %d %d", &a, &b, &c);
                                        //     fflush(stdin);

                                        //     d = a + b + c;
                                        //     fprintf(fw, "%s %d %d %d %d", name, a, b, c, d);
                                        // }
                                        // fclose(fw);
                                        // FILE* fr = fopen("input.txt", "r");
                                        // char max_name[32], min_name[32]; int max = 0, min = 10000;
                                        // for(int i = 0; i<3; i++)
                                        // {
                                        //     fscanf(fr, "%[^0-9] %d %d %d %d", &name, &a, &b, &c, &d);
                                        //     if(d>max)
                                        //     {
                                        //         strcpy(max_name, name);
                                        //         max = d;
                                        //     }
                                        //     if(d<min)
                                        //     {
                                        //         strcpy(min_name, name);
                                        //         min = d;
                                        //     }
                                        // }
                                        // printf("Maximum score %d by %s\n", max, max_name);
                                        // printf("Minimum score %d by %s", min, min_name);
                                        // fclose(fr);


                                        // st *cse[3];
                                        // for(int i = 0; i<3; i++)
                                        // {
                                        //     cse[i] = (st*)malloc(sizeof(st));
                                        //     if(cse[i] == NULL)
                                        //         {printf("Break"); return -1;}
                                        // }

                                        // char name[32];


                                        // for(int i = 0; i<3; i++)
                                        // {
            //Structure                 //     fgets(name, 31, stdin);
                                        //     strcpy(cse[i]->name, name);
                                        //     scanf("%d %d %d", &cse[i]->a, &cse[i]->b, &cse[i]->c);
                                        //     fflush(stdin);
                                        //     cse[i]->d = cse[i]->a + cse[i]->b + cse[i]->c;
                                        // }
                                        // int max = 0; int min = 10000; int i; int j;
                                        // for(int k = 0; k<3; k++)
                                        // {
                                        //     if(cse[k]->d>max)
                                        //     {
                                        //         max = cse[k]->d;
                                        //         i = k;
                                        //     }
                                        //     if(cse[k]->d<min)
                                        //     {
                                        //         min = cse[k]->d;
                                        //         j = k;
                                        //     }
                                        // }

                                        // printf("Maximum %d by %s\n", cse[i]->d, cse[i]->name);
                                        // printf("Minimum %d by %s", cse[j]->d, cse[j]->name);


}