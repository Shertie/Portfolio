#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void Z1_a(unsigned int n, int tab[])
{
    for (int i = 0; i < n; i++)
    {
        tab[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,",tab[i]);
    }
}
void Z1_b(unsigned int n, int tab[])
{
    for (int i = 0; i < n; i++)
    {
        tab[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,",tab[i]);
    }
}
void Z1_c(unsigned int n, int tab[])
{
    for (int i = 0; i < n; i++)
    {
        tab[i] *= 2;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,",tab[i]);
    }
}
void Z1_d(unsigned int n, int tab[])
{
    for (int i = 0; i < n; i++)
    {
        if (tab[i] < 0)tab[i] *= -1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,",tab[i]);
    }
}
double Z4 (unsigned int n, int tab[])
{
    double iloczyn = 1;
    for (int i = 0; i < n; i++)
    {
        iloczyn *= tab[i];
    }
    double avg = pow(iloczyn,1/n);
    return avg;
}
void Z6_a (unsigned int n, int tab1[], int tab2[])
{
    for (int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,",tab2[i]);
    }
}
void Z6_b (unsigned int n, int tab1[], int tab2[])
{
    int left = 0;
    int right = n-1;
    while (left < right)
    {
        int t = tab1[left];
        tab1[left] = tab1[right];
        tab1[right] = t;
        left++;right--;
    }
    for (int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,",tab2[i]);
    }
}
void Z7_a (unsigned int n, int tab1[], int tab2[], int tab3[])
{
    for (int i = 0; i < n; i++)
    {
        tab3[i] = tab1[i] + tab2[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,",tab3[i]);
    }
}
void Z7_b (unsigned int n, int tab1[], int tab2[], int tab3[])
{
    for (int i = 0; i < n; i++)
    {
        if (tab1[i] >= tab2[i]) tab3[i] = tab1[i];
        else tab3[i] = tab2[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,",tab3[i]);
    }
}
void Z7_c (unsigned int n, int tab1[], int tab2[], int tab3[])
{
    int tabtemp[n];
    int tabtemp2[n];
    for (int i = 0; i < n; i++)
    {
        tabtemp[i] = tab2[i];
        tabtemp2[i] = tab3[i];
        tab2[i] = tab1[i];
        tab3[i] = tabtemp[i];
        tab1[i] = tabtemp2[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,",tab3[i]);
    }
}
int Z10_a (unsigned int n, int tab[])
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] > max)max = tab[i];
    }
    return max;
}
int Z10_b (unsigned int n, int tab[])
{
    int min = 255;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] < min)min = tab[i];
    }
    return min;
}
int Z10_c (unsigned int n, int tab[])
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] > max)max = i;
    }
    return max;
}
int Z10_d (unsigned int n, int tab[])
{
    int min = 255;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] < min)min = i;
    }
    return min;
}
int Z10_e(unsigned int n, int tab[])
{
    int max = tab[0];
    for (int i = 0; i < n; i++)
    {
        if (tab[i] <0)tab[i] *= -1;
        if (tab[i] > max)max = tab[i];
    }
    return max;
}
int Z10_f (unsigned int n, int tab[])
{
    int min = tab[0];
    for (int i = 0; i < n; i++)
    {
        if (tab[i] <0)tab[i] *= -1;
        if (tab[i] < min)min = tab[i];
    }
    return min;
}
void Z12_a (unsigned int n, int tab[])
{
    int i, j, temp;
    for (i = 0, j = n-1; i < j; i++, j--) {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
    }
    for (int itr = 0; itr < n; itr++)
    {
        printf("%d,",tab[itr]);
    }
}
void Z12_b (unsigned int n, int tab[])
{
    int temp = tab[0];
    for (int i = 0; i < n-1; i++)
    {
        tab[i] = tab[i+1];
    }
    tab[n-1] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d,",tab[i]);
    }
}
void Z12_c (unsigned int n, int tab[])
{
    int temp = tab[n-1];
    for (int i = n-1; i > 0; i--)
    {
        tab[i] = tab[i-1];
    }
    tab[0] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d,",tab[i]);
    }
}
void Z12_d (unsigned int n, int tab[])
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (tab[j] > tab[j+1])
            {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,",tab[i]);
    }
}
void Z12_e (unsigned int n, int tab[])
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (tab[j] < tab[j+1])
            {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,",tab[i]);
    }
}

int main()
{
    //Zmienne stworzone na potrzeby przyszlych zadan
    unsigned int n = 5;
    int tab[] = {3,1,5,2,9};
    int tab1[] = {5,7,9,7,2};
    int tab2[] = {1,4,2,6,5};

    //Zadanie 1
    //a
    printf("Zadanie 1a\n");
    Z1_a(n,tab);
    printf("\nZadanie 1b\n");
    //b
    Z1_b(n,tab);
    printf("\nZadanie 1c\n");
    //c
    Z1_c(n,tab);
    printf("\nZadanie 1d\n");
    //d
    Z1_d(n,tab);

    //Zadanie 4
    printf("\nZadanie 4\n%lf",Z4(n,tab));

    //Zadanie 6
    //a
    printf("\nZadanie 6a\n");
    Z6_a(n,tab,tab1);
    //b
    printf("\nZadanie 6b\n");
    Z6_b(n,tab,tab1);

    //Zadanie 7
    //a
    Z7_a(n,tab,tab1,tab2);
    printf("\nZadanie 7b\n");
    //b
    Z7_b(n,tab,tab1,tab2);
    printf("\nZadanie 7c\n");
    //c
    Z7_c(n,tab,tab1,tab2);
    printf("\nZadanie 10a\n");

    //Zadanie 10
    //a
    printf("%d",Z10_a(n,tab));
    //b
    printf("\nZadanie 10b\n%d",Z10_b(n,tab));
    //c
    printf("\nZadanie 10c\n%d",Z10_c(n,tab));
    //d
    printf("\nZadanie 10d\n%d",Z10_d(n,tab));
    //e
    printf("\nZadanie 10e\n%d",Z10_e(n,tab));
    //f
    printf("\nZadanie 10f\n%d",Z10_f(n,tab));

    //Zadanie 12
    //a
    printf("\nZadanie 12a\n");
    Z12_a(n,tab);
    printf("\nZadanie 12b\n");
    //b
    Z12_b(n,tab);
    printf("\nZadanie 12c\n");
    //c
    Z12_c(n,tab);
    printf("\nZadanie 12d\n");
    //d
    Z12_d(n,tab);
    printf("\nZadanie 12e\n");
    //e
    Z12_e(n,tab);
    printf("\n");
}
