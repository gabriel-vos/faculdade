#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int testaperfeito(int num)
{
    int fat = 0, i;
    for (i = num - 1; i > 0; i--)
    {
        if (num % i == 0)
        {
            fat += i;
        }
    }
    if (fat == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i, perf;
    system("cls");
    printf("\t===== Numeros perfeitos ate 1000 =====\n\n");
    for (i = 1; i <= 1000; i++)
    {
        perf = testaperfeito(i);
        if (perf == 1)
        {
            printf("%d  ", i);
        }
    }
    printf("\n\n");
}