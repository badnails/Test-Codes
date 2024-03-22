#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    float i;
    float j;
    float k;

}vector;


vector* add(vector* a, vector* b, vector* c)
{
    c->i = a->i + b->i;
    c->j = a->j + b->j;
    c->k = a->k + b->k;
    return c;
}

vector* sub(vector* a, vector* b, vector* c)
{
    c->i = a->i - b->i;
    c->j = a->j - b->j;
    c->k = a->k - b->k;
    return c;
}

vector* scalar_mul(vector* a, vector* c, int m)
{
    c->i = m*a->i;
    c->j = m*a->j;
    c->k = m*a->k;
    return c;
}

vector* scalar_div(vector* a, vector* c, int n)
{
    c->i = a->i/n;
    c->j = a->j/n;
    c->k = a->k/n;
    return c;
}

int dotm(vector* a, vector* b)
{
    int c = (a->i*b->i) + (a->j*b->j) + (a->k*b->k);
    return c;
}

vector* crossm(vector* a, vector* b, vector* c)
{
    c->i = (a->j * b->k) - (a->k * b->j);
    c->j = (b->i * a->k) - (a->i * b->k);
    c->k = (a->i * b->j) - (a->j * b->i);
    return c;
}

void print(vector* c)
{
    printf("<%.2f %.2f %.2f>\n", c->i, c->j, c->k);
}

int main()
{
    vector a, b;
    int m, n;
    scanf("%f %f %f", &a.i, &a.j, &a.k);
    scanf("%f %f %f", &b.i, &b.j, &b.k);
    scanf("%d", &m);
    scanf("%d", &n);
    vector* c = (vector*) malloc (sizeof(vector));

    vector* addition = add(&a, &b, c);
    printf("Vector Addition "); print(addition);
    vector* substraction = sub(&a, &b, c);
    printf("Vector Substraction "); print(substraction);
    int dot = dotm(&a, &b);
    printf("Dot Multiplication "); printf("%d\n", dot);
    vector* cross = crossm(&a, &b, c);
    printf("Cross Multiplication "); print(cross);
    vector* scalarMul = scalar_mul(&a, &b, m);
    printf("Scalar Multiplication "); print(scalarMul);
    vector* scalarDiv = scalar_div(&a, &b, n); 
    printf("Scalar Division "); print(scalarDiv);

    free(c);

    
    
}