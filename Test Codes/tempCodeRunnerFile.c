void scan(char** strs, int n)
// {
//     char x; int i = 0;
//     strs = (char**)realloc(strs, n+1);
//     if(strs==NULL) printf("\nERROR 3\n");

//     *(strs + n) = (char*)malloc(sizeof(char));
//     if(*(strs + n)==NULL) printf("\nERROR 3\n");

//     while(x!='\n')
//     {
//         scanf("%c", &x);
//         *(strs + n) = realloc(*(strs + n), i+2);
//         if(*(strs + n)==NULL) printf("\nERROR 3\n");
//         *(*(strs+n)+i) = x;
//         *(*(strs+n)+i+1) = '\0';
//         i++;
//     }

//     n++;
//     if(n==3)
//     {
//         *(strs + n) = '\0'; return;
//     }
//     scan(strs, n);
// }