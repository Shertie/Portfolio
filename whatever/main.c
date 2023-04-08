#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void kwadrat(double a, double b, double c)
{
    double delta = (b * b) - (4.0f * a * c);
    double x;
    if (delta < 0)printf("brak rozwiazan");
    else if (delta == 0)
        {
            x = (-b / (2.0f * a));
            printf("jedynym pierwiastkiem jest liczba %lf",x);
        }
    else
    {
        double x1 = (-b - sqrt(delta)) / (2.0f * a);
        double x2 = (-b + sqrt(delta)) / (2.0f * a);
        printf("pierwiastki rzeczywiste tej funkcji to: %lf %lf", x1, x2);
    }
}

int main()
{
    //zadanie 1.3.1
    /*int n;
    scanf("%d", &n);
    if (n<0) printf("%d", n*-1);
    else printf("%d", n);*/

    //zadanie 1.3.2
    /*int a,b;
    scanf("%d %d", &a,&b);
    if (a>b || a==b)printf("%d", a);
    else printf("%d", b);*/

    //zadanie 1.3.3
    /*int a,b,c;
    scanf("%d %d", &a,&b,&c);
    int max = 0;
    if (a>max)max = a;
    if (b>max)max = b;
    if (c>max)max = c;
    if (max == a && max == b || max == b && max == c || max == a && max == c)printf("%d", "przynajmniej dwie liczby sa najwiekszymi i wynosza ", max);
    else printf("%d", "Najwieksza liczba wynosi ",max);*/

    //zadanie 1.3.4
    /*int a,b;
    scanf("%d %d", &a,&b);
    if (a < 0)a*= -1;
    if (b < 0)b*= -1;
    if (a>b)printf("%d",a);
    else printf("%d",b);*/


    //zadanie 1.3.7
    double a,b,c;
    scanf("%lf %lf %lf", &a,&b,&c);
    kwadrat(a,b,c);



    //zadanie 1.4.1
    /*int n,m;
    scanf("%d %d",&n,&m);
    if (n < 0)printf("liczba n musi byc dodatnia");
    else
    {
        for (int i = 1; i <= m; i++)
        {
           while (n*i < m)
                {
                    printf("%d \n",n*i);
                    break;
                }
        }
    }*/

    //zadanie 1.4.2
    /*int n,m;
    if (n < 1 || m < 1) printf("obie liczby musza byc dodatnie");
    else
    {
        scanf("%d %d",&n,&m);
        for (int i = 1; i <= m; i++)
        {
            printf("%d", n*i);
        }
    }*/

    //zadanie 1.4.3
    /*int n,m,k;
    scanf("%d %d %d", &n,&m,&k);
    if (n < 1 || m < 1 || k < 1)printf("wszystkie liczby musza byc dodatnie");
    else
    {
       for (int i = 1; i < k; i++)
       {
           if (n*i > m && n*i < k)
            printf("%d \n", n*i);
       }
    }*/

    //zadanie 1.4.4
    /*int n;
    scanf("%d", &n);
    int silnia = 1;
    for (int i = 1; i <= n; i++)silnia *= i;
    printf("%d", silnia);*/

    //zadanie 1.4.5
    /*int n;
    scanf("%d", &n);
    int suma = 0;
    for (int i = 0; i <= n; i++)
    {
        int m = 0;
        m = i * i;
        suma += m;
    }
    printf("%d", suma);*/

}
