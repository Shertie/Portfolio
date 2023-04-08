#include <stdio.h>
#include <stdlib.h>

int z3_2_1(int * a, int * b)
{
    if (*a < *b)return *a;
    else return *b;
}
int z3_2_2(int * a, int * b)
{
    if (*a < *b)return a;
    else return b;
}
void z3_2_4(int * a, int * b)
{
    if (*a>*b)
    {
        int c = *b;
        int d = *a;
        printf("%d %d\n",c,d);
    }
    else
    printf("%d %d\n",*a,*b);
}
void z3_2_6(int n, int *w)
{
    *w = n;
    printf("%d\n",*w);
}
int z3_2_9()
{
    int * wsk = malloc(sizeof(int));
    return &wsk;
}
int z3_2_11(int n)
{
    if (n < 1)return 0;
    else
    {
        int *wsk = malloc(sizeof(int)*n);
         return &wsk[0];
    }
}
int z3_2_12(int n)
{
    if (n < 1)return 0;
    else
    {
        int *wsk = malloc(sizeof(double)*n);
         return &wsk[0];
    }
}
void z3_2_16(const int *a, int *const b)
{
    *b = *a;
    printf("%d %d\n",*a,*b);
}

int main()
{
    //3.2.1
    int * a =4;
    int * b =8;
    printf("%d\n",z3_2_1(&a,&b));

    //3.2.2
    int * c =2;
    int * d =1;
    printf("%p\n",z3_2_2(&c,&d));

    //3.2.4
    int *e = 43;
    int *f = 9;
    z3_2_4(&e,&f);

    //3.2.6
    int n = 4;
    int *w = 9;
    z3_2_6(n,&w);

    //3.2.9
    printf("%p\n",z3_2_9());

    //3.2.11
    printf("%p\n",z3_2_11(4));

    //3.2.12
    printf("%p\n",z3_2_12(7));

    //3.2.16
    const int *h = 8;
    int *const k = 27;
    z3_2_16(&h,&k);
}
