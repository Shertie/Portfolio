#include<stdio.h>
#include<stdlib.h>

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

int main()
{
    z2_2_2();
    return 0;
}
