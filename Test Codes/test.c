#include<stdio.h>

// typedef struct
// {
//     char i[10];
//     char n[20];
//     int a;
//     char d[10];
//     float s;
// }Employee;

// void add(Employee* e)
// {
//     FILE *fp;
//     fp=fopen("employees_record.txt", "a");
//     fputs(e->i, fp);
//     fputs("\n", fp);
//     fputs(e->n, fp);
//     fputs("\n", fp);
//     fprintf(fp, "%d\n", e->a);
//     fputs(e->d, fp);
//     fputs("\n", fp);
//     fprintf(fp, "%.2f\n", e->s);
//     fprintf(fp, "\0");
// }

// void in(Employee* e)
// {
//     gets(e->i);
   
//     gets(e->n);
   
//     scanf("%d\n", &e->a);
   
//     scanf("%s", e->d);
    
//     scanf("%f", &e->s);
    
// }

// void print()
// {
//     FILE *fp;
//     fp=fopen("employees_record.txt", "r");
    
//     char line[1000];
//     for(int i = 0; i< 5; i++)
//     {
//         fgets(line, 20, fp);
//         printf("%s", line);
//     }
// }

// int main()
// {
//     Employee x;
//     // in(&x);
//     // add(&x);
//     print();
// }




// typedef struct
// {
//     char name[20];
//     int marks[5];
// } st;

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     st* starr = (st *)malloc(n*sizeof(st));

//     for(int i = 0; i<n; i++)
//     {
//         scanf("%s", (starr+i)->name);
//         for(int j = 0; j<5; j++)
//         {
//             scanf("%d", &starr[i].marks[j]);
//         }

//     }
//     for(int i = 0; i<n; i++)
//     {
//         printf("%s\n", (starr+i)->name);
//         for(int j = 0; j<5; j++)
//         {
//             printf("%d\n", starr[i].marks[j]);
//         }

//     }
// }



// void input(key)
// {
//     FILE* fp = fopen("login.txt", "a");
//     FILE* fp2 = fopen("pass.txt", "a");
//     if(us == 1)
//     {
//         fputc(key, fp);
//     }
//     if(pass == 1)
//     {
//         fputc(key, fp2);
//     }
    

// }
#include<string.h>
// char user[20] = "hjasb";
// char pass[20] = "jhasd";

// int auth;
// int check()
// {
// 	FILE* fp = fopen("user.txt", "r");
// 	FILE* fp2 = fopen("pass.txt", "r");
//     if(fp == NULL) printf("Error");
//     if(fp2 == NULL) printf("Error");

// 	int pos = 0, flag = 0; char tempu[20];
// 	while(!feof(fp))
// 	{
// 		fgets(tempu, 20, fp);
//         (tempu[strlen(tempu)-1] == '\n')?(tempu[strlen(tempu)-1] = '\0'):1;

// 		if(strcmp(tempu, user) == 0)
// 		{
// 			flag = 1;
// 			break;
// 		}
// 		pos++;
// 	}
// 	if(flag == 0) return auth = 0;
// 	for(int i = 0; i<pos; i++) fgets(tempu, 20, fp2);
// 	fgets(tempu, 20, fp2);
//     (tempu[strlen(tempu)-1] == '\n')?(tempu[strlen(tempu)-1] = '\0'):1;
// 	if(strcmp(tempu, pass) == 0)
// 	{
// 		return auth = 1;
// 	}
// 	else return auth = 2;
// }





#include<stdlib.h>





// typedef struct
// {
//     char place[20];
//     char tm[10];
//     char date[20];
// }wish;
// char user[20]="abcd.txt";
// void filein(wish* x)
// {
//     sprintf(user, "%s.txt", user);
//     FILE* fp = fopen(user, "a");
//     if(fp==NULL) printf("Error");
//     fputs(x->place, fp);
//     fputs("\n", fp);
//     fputs(x->tm, fp);
//     fputs("\n", fp);
//     fputs(x->date, fp);
//     fputs("\n", fp);
// }

// wish pt[20];
// void read()
// {
//     //sprintf(user, "%s.txt", user);
//     FILE* fp = fopen(user, "r");
//     for(int i = 0; i<3; i++)
//     {
//         fgets(pt[i].place, 50, fp);
//         pt[i].place[strlen(pt[i].place) - 1] = '\0';
//         fgets(pt[i].tm, 50, fp);
//         pt[i].tm[strlen(pt[i].tm) - 1] = '\0';
//         fgets(pt[i].date, 50, fp);
//         pt[i].date[strlen(pt[i].date) - 1] = '\0';

//     }
// }



// int main()
//{
    // wish* x = (wish*)malloc(sizeof(wish));
    // strcpy(x->place, "Ahsan Manjil");
    // strcpy(x->date, "10.20");
    // strcpy(x->tm, "Train");
    // filein(x);
//     read();
//     for(int i = 0; i<3; i++)
//     {
//         printf("%s\n", pt[i].place);
//         printf("%s\n", pt[i].tm);
//         printf("%s\n", pt[i].date);

//     }

   
// }


// int sum(int n)
// {
//     if(n == 0) return  0;

//     return n%10 + sum(n/10);
// }

int ssum(int a, int d, int n)
{
    
    if(n == 0) return 0;
    
    return a + ssum(a+d, d, --n);

}

// void scan(char** strs, int n)
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

void strPrint(char** str)
{
    int i = 0;
    while(*(str + i))
    {
        printf("%s", *(str+i));
        i++;
    }
}

void intIn()
{
    int n;
    scanf("%d", &n);
    if(n == 0) return;
    
    intIn();
    printf("%d\n", n);
}


void intShow(int n)
{
    if(n == 0) return;
    
    intShow(n/10);
    printf("%d", n%10);
}


int maxArr(int* arr, int n, int max)
{
    if(n==0) return max;
    if(arr[n-1]>max) max=arr[n-1];

    max = maxArr(arr, n-1, max);
    return max;
}

int maxArrBETTER(int arr[], int n)
{
    if(n == 1) return *(arr+n-1);

    int max = maxArrBETTER(arr, n-1);
    if(max>*(arr+n-1)) return max;
    else return *(arr+n-1);
}


void printArr(int* arr, int n)
{
    if(n == 0) return;
    printArr(arr, n-1);
    printf("%d ", arr[n-1]);
}

// void reverse(int* arr, int n, int m)
// {
//     if(n == 0)
//     {
        
//         m--;
//         if(m
//         return;
//     }
//     int temp = arr[n-1];
//     arr[n-1] = arr[n-2];
//     arr[n-2] = temp;
//     reverse(arr, n-1, m);
// }


// int sum(unsigned int n)
// {
//     if(n == 0) return 0;
//     return n%10 + sum(n/10);
// }

// int fact(int n)
// {
//     if(n == 1) return 1;
//     return n*fact(n-1);
// }

// int arr[9] = {1,2,3,4,5,6,7,8,9};

// void filein()
// {
//     FILE* fp = fopen("a.txt", "r");
//     for(int i = 0; i<10; i++)
//     {
//         fscanf(fp, "%d ", &arr[i]);
//     }
// }
// #include<math.h>


int recBinSearch(int* arr, int l, int r, int x)
{
    if(l>r) return 0;
    int mid = (l+r)/2;
    if(arr[mid] == x) return 1;
    if(arr[mid]>x) return recBinSearch(arr, l, mid-1, x);
    if(arr[mid]<x) return recBinSearch(arr, mid+1, r, x);
}





// int binarySearch(int a[], int l, int r, int x)
// {
//     while(l<=r)
//     {
//         int mid = (l+r)/2; 
//         if(a[mid]==x)
//         {
//             printf("Found");
//             return 1;
//         }
//         else if(a[mid]<x)
//         {
//             l=mid+1;
//         }
//         else if(a[mid]>x)
//         {
//             r=mid-1;
//         }


//     }
//     printf("Not found");
//     return 0;
// }

// int* selectionSort(int* a, int n)
// {
//     for(int i = 0; i<n; i++)
//     {
//         for(int j = 0; j<)
//     }
// }

int setbit(int x, int i)
{
    int mask = 1;
    mask<<=i;

    return x|mask;
}

int resetbit(int x, int i)
{
    int mask = 1;
    mask<<=i;
    mask = ~mask;

    return x&mask;
}

int invertbit(int x, int i)
{
    int mask = 1;
    mask<<=i;

    return x^mask;
}

int setbits(int x, int i, int n)
{
    int mask = ~0;
    mask<<=n;
    mask = ~mask;
    mask<<=i;

    return x|mask;
}

int resetbits(int x, int i, int n)
{
    int mask = ~0;
    mask<<=n;
    mask = ~mask;
    mask<<=i;
    mask = ~mask;

    return x&mask;
}

int invertbits(int x, int i, int n)
{
    int mask = ~0;
    mask<<=n;
    mask = ~mask;
    mask<<=i;

    return x^mask;
}

int lcs(int x, int n)
{
    int leftbits = (x&(((1<<n)-1)<<(31-n+1)))>>(31-n+1);
    x<<=n;
    return x|leftbits;

}

int rcs(int x, int n)
{
    int rightbits = ((1<<n)-1)&x;
    x&=(~((1<<n)<<(31-n+1)));
    return x>>n|rightbits<<(31-n+1);
}

void printbits(int x)
{
    for(int i = 0; i<32; i++)
    {
        printf("%d", (x>>(31-i))&1);
    }
    printf("\n");

}

int recursiveDecimalToBinary(int n)
{
    if(n == 0) return 0;
    return n%2 + 10*recursiveDecimalToBinary(n/2);
}


long fib(int n)
{
    if(n<=3) return 1;
    long v1 = fib(n-1);
    printf("%ld ", v1);
    long v2 = fib(n-2);
    printf("%ld ", v2);
    long v3 = fib(n-3);
    printf("%ld ", v3);

    return v1 + v2 + v3;
}

int main()
{
                                                        // char** strs = (char **)malloc(sizeof(char*));
                                                        // int n = 0;
                                                        // scan(strs, n);
                                                        // strPrint(strs);
                                                        // int i = 0;
        //Input Strings                                 // while (*(strs+i))
                                                        // {
                                                        //     free(*(strs+i));
                                                        //     i++;
                                                        // }
                                                        // free(strs);
    
    
        // int arr[6]={1,2,3,4,5,6};

        // reverse(arr, 6, 6);

        // int a[10] = {2, 5, 7, 9, 3, 1, 8, 10, 0, -4};
        // int x[10];
        // x=selectionSort(a);

        // long ret = fib(6);
        // printf("\n%ld", ret);
        
        // int n, b, i = 0, count = 0;
        // printf("Input a number: ");
        // scanf("%d", &n);
        // printf("Base conversion: ");
        // scanf("%d", &b);

        // double x = n;
        // char s[32];

        // while(x>=1)
        // {
        //     x/=b;
        //     count++;
        // }
        // while(count)
        // {
        //     x*=b;
        //     if((int)x>=10) s[i] = 'A' + (int)x%10;
        //     else s[i] = '0' + (int)x;
        //     x-=(int)x;
        //     i++;
        //     count--;
        // }
        // s[i] = '\0';
        // printf("%s", s);

        int array[20] = {1,2,3,4,5,6,7,8,9,10,11,13,14,15,16,17,18,19,20,50};

        printf("%d", recBinSearch(array, 0, 19, 49));


        return 0;
        
}