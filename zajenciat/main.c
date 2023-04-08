#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

//Zadanie 3.2.13
double z3_2_13(double(*function)(int),int n)
{
    return function(n);
}
double zadanko (int x)
{
    return x;
}

//Zadanie 3.2.14
bool z3_2_14 (int (*ff)(int),int (*fff)(int),unsigned int n)
{
    int c = 0;
    for (int i = 0; i <= n; i+=1)
    {
        if (ff(i) == fff(i))c+=1;
    }
    if (c == n + 1)return true;
    else return false;
}
int fun (int x)
{
    return x * 2;
}
int ction (int x)
{
    return x * 2;
}

//Zadanie 3
int Zadanie_3 (int (*func)(int),int (*f)(int),int n)
{
    return func(n) + f(n);
}
int f1(int x)
{
    return x*x;
}
int f2(int x)
{
    return x+2*x;
}

//Zadanie 4
int Zadanie_4(int n)
{
    if (n < 0) return 0;
    else if (n == 0 || n == 1)return 1;
    else if (n%3 == 0)return Zadanie_4(n/3);
    else if (n%3 == 1)return Zadanie_4(n+1);
    else return Zadanie_4(n+1) - 1;
}

//Zadanie 5
int foo (const int *wsk1,int *const wsk2)
{
    return *wsk1 - *wsk2;
}

int main()
{
    //Zadanie 3.2.13
    int n = 6;
    double wynik = z3_2_13(zadanko,n);
    printf("%u %lf", n, wynik);

    //Zadanie 3.2.14
    bool result = z3_2_14(fun,ction,n);
    if (result == true)printf("\ntrue");
    else printf("\nfalse");
    //Zadanie 3
    printf("\n%d",Zadanie_3(f1,f2,n));

    //Zadanie 4
    printf("\n%d",Zadanie_4(n));

    //Zadanie 5
    const int *wsk1 = 387;
    int *const wsk2 = 36;
    printf("\n%d", foo(&wsk1, &wsk2));
}

