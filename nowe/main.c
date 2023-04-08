#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int glob_var = 0;
void z2_2_2()
{
    int n;
    scanf("%d",&n);
    if (n<0)printf("nieprawidlowa wartosc funkcji");
    else
    {
        int itr = 1;
        for (int i = 1; i <= n; i++)
        {
            itr *= i;
        }
        printf("n! wynosi %d",itr);
    }
}
int z2_2_4(int n)
{
    if (n < 0)printf("nieprawidlowa wartosc funkcji");
    int a = 2;
    for (int i = 0; i < n-1; i++)
    {
        a*=2;
    }
    return a;
}
int z2_2_8(int n)
{
    if (n < 0)printf("nieprawidlowa wartosc funkcji");
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (i*i == n)return i;
        }
    }
}
double z2_2_12(int m, int n)
{
    if (n < 0 || m < 2)printf("nieprawidlowa wartosc funkcji");
    else
    {
        int suma = 0;
        for (double i = 0; i <= n; i++)
        {
            suma += pow(i,1/m);
        }
        return suma;
    }
}
int z2_2_20(int n)
{
    if (n<0)return 0;
    if (n == 1)return 1;
    if (n == 2)return 2;
    return z2_2_20(n-1) * n;
}
int z2_2_24(int n)
{
    if (n<0)return 0;
    if (n==1 || n==0)return 1;
    return z2_2_24(0)+z2_2_24(1)+1;

}
int z2_2_29(int n, int m)
{
    if (m == 0)return n;
    else return z2_2_29(m,n%m);
}
int main()
{
    //z2_2_2();
    //printf("%d",z2_2_4(4));
    //printf("%d",z2_2_8(16));
    //printf("%lf",z2_2_12(2,4));
    //printf("%d",++glob_var);
    //printf("%d",z2_2_20(3));
    printf("%d", z2_2_24(4));
    //printf("%d",z2_2_29(20,28));
    return 0;
}
