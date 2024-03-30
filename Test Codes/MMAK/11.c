#include<stdio.h>
#include<string.h>

int main(int argc,char* argv[])
{
    // int n;
    // scanf("%d", &n);
    
    // char s[n][30];

    // int san[n];
    // for(int i = 0; i < n; i++)
    // {
    //     san[i] = 1;
    // }

    // int k = 0;

    // for(int i=0; i<n; i++)
    // {
    //     char temp[30]; 
    //     scanf("%s", &temp);
    //     getchar();
    //     if(strcmp(s[k], temp)==0)
    //     {
    //         san[k]++;
    //     }
    //     else{
    //         strcpy(s[k], temp);
    //         k++;
    //     }
    // }
    // for(int i=0; i<n; i++)
    // {
    //     printf("%s %d\n", s[i], san[i]);
    // }
    
                                                                // char* s[argc-1]; int sn[argc-1]; int count = 0;


                                                                // for(int i = 0; i<argc; i++)
                                                                // {
                                                                //     sn[i] = 0;
                                                                // }
                                                                // for(int i = 1; i < argc; i++)
                                                                // {
                                                                //     int flag = 1;
                                                                //     for(int j =0; j<count; j++)
                                                                //     {
                                                                //         if(strcmp(s[j], argv[i])==0)
                                                                //         {
                                                                //             sn[j]++;
                                                                //             flag = 0;
                                                                //             break;
                                                                //         }
                                                                //     }
                                                                //     if(flag)
                                                                //     {
                                                                //         s[count] = argv[i];
                                                                //         sn[count]++;
                                                                //         count++;
                                                                //     }
                                                                // }
                                                                // for(int i = 0; i<count; i++)
                                                                // {
                                                                //     printf("%s %d\n", s[i], sn[i]);
                                                                // }
    
    for(int i = 1; i<argc; i++)
    {
        int count = 1;
        for(int j = 1; j<argc; j++)
        {
            if(argv[i] && strcmp(argv[i], argv[j])==0 && i!=j)
            {
                count++;
                argv[j] = NULL;
            }
            
        }
        printf("%s %d\n", argv[i], count);
    }






}