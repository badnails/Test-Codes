#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int factorial(int *n, int *result)
{
    if (*n == 1)
        return 1;

    *result = ((*n)--) * factorial(n, result);

    return *result;
}

void mystrcpy(char *s, char *d)
{
    while (*s)
    {
        *d = *s;
        s++;
        d++;
    }
    *d = '\0';
}

int sum(int *a, int s)
{
    if (s == 0)
        return 0;
    return *(a + s - 1) + sum(a, s - 1);
}


int **matIn(int row1, int col1)
{
    int **mat1 = (int **)malloc(sizeof(int *) * row1);
    for (int i = 0; i < row1; i++)
    {
        *(mat1 + i) = (int *)malloc(sizeof(int) * col1);
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", *(mat1 + i) + j);
        }
    }
    return mat1;
}

int rowcomp(int **mat, int r1, int r2, int col)
{
    for(int i = 0; i<col; i++)
    {
        if(*(*(mat+r1)+i)!=*(*(mat+r2)+i)) return 0;
    }
    return 1;
}

void printrow(int **m, int r, int col)
{
    for(int i = 0; i<col; i++)
    {
        printf("%d ", *(*(m+r)+i));
    }
    printf("\n");
}

void nums(int n)
{
    if(n == 1)
    {
        printf("1\n");
        return;
    }
    printf("%d\n", n);
    nums(n-1);
    
}

int sums(int n)
{
    if(n == 0) return 0;
    return n + sums(n-1);
}






struct Marks 
{
    int roll;
    char name[50];
    int age;
};

void print(struct Marks std, int n)
{   
    if(n == 1)
    printf("%s\n", std.name);

    if(n == 2)
    printf("%d", std.roll);

}

int arithmetic(int a, int d, int n)
{
    if(n == 1) return a;
    return d + arithmetic(a,d,n-1);
}

int arithmeticSum(int a, int d, int n)
{
    if(n == 1) return a;
    return a + (n-1)*d + arithmeticSum(a,d,n-1);
}

int geometric(int a, int r, int n)
{
    if(n == 1) return a;
    return r * geometric(a,r,n-1);
}

int geometricSum(int a, int r, int n)
{
    if(n == 1)  return a;
    return geometricSum(a,r,n-1)+r*geometric(a,r,n-1);

}

void inputTill0()
{
    int n; scanf("%d", &n);
    printf("%d\n", n);
    if(n == 0) return;
    inputTill0();
}

int nPr(int n, int r)
{
    if(r == 1) return n;

    return n*nPr(n-1,r-1);
}

int nCr(int n, int r)
{
    
}

int main()
{


    printf("%d", nPr(5,4));
    //printf("%d", geometricSum(50,2,13));


    // int n; scanf("%d", &n);
    // struct Marks std[n];

    // for(int i = 0; i< n; i++)
    // {
    //     scanf("%d" , &std[i].roll);
    //     scanf("%s" , &std[i].name);
    //     scanf("%d" , &std[i].age);
    // }

    

    // for(int i = 0; i<n; i++)
    // {
    //     printf("%d\n", perc(std[i]));
    // }

    // char str[5]="abcd";

    // int st  = 0, end = 4;

    // isPalindrome(str, st, end);

    // printf("%d", sums(4));

    // int row1, col1;
    // int **mat1;
    // scanf("%d %d", &row1, &col1);

    // mat1 = matIn(row1, col1);

    // int row2, col2;
    // int **mat2;
    // scanf("%d %d", &row2, &col2);

    // mat2 = matIn(row2, col2);


    // for(int i = 0; i<row1; i++)
    // {
    //     int fl = 0;
    //     for(int j = i-1; j>=0; j--)
    //     {
    //         fl = rowcomp(mat1, i, j, col1);
    //         if(fl == 1) break;
    //     }
    //     if(fl == 0) printrow(mat1, i, col1);

    // }

    // for (int i = 0; i < row2; i++)
    // {
    //     for (int j = 0; j < col2; j++)
    //     {
    //         printf("%d ", *(*(mat2 + i) + j));
    //     }
    //     printf("\n");
    // }

}