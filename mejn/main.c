#include <stdio.h>
#include <stdlib.h>


double* Z4_2_14(unsigned int n)
{
   double* arrray = malloc(n * sizeof(double));
   return arrray;
}
void Z4_2_16(double* array)
{
    free(array);
}
double* Z4_2_17(unsigned int n, double* tab)
{
    double *list = malloc(n * sizeof(double));
    for (int i = 0; i < n; i++)
    {
        list[i] = tab[i];
    }
    return list;
}
int* Z4_2_19(unsigned int n, int *tab1)
{
    int itr = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab1[i] != 0)itr++;
    }
    int *tab2 = malloc(itr * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        if (tab1[i] == 0)i++;
        else tab2[i] = tab1[i];
    }
    return tab2;
}

int main()
{
    unsigned int n = 8;
    double *tab = malloc(n * sizeof(double));
    int *tab1 = malloc(n * sizeof(int));
    double* array = malloc( n * sizeof(double));

    //Zadanie 4.2.14
    printf("%p", Z4_2_14(n));

    //Zadanie 4.2.16
    Z4_2_16(array);

    //Zadanie 4.2.17
    printf("\n%p", Z4_2_17(n, tab));

    //Zadanie 4.2.19
    printf("\n%p", Z4_2_19(n, tab1));
}
