#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int dado()
{
    return 1 + (rand() % 6);
}

int main()
{
    system("cls");
    srand(time(0));
    int d[6] = {0}, i, num, ped, j;
    printf("\t*** Gire os dados: ***\n");
    printf("\nDeseja girar o dado quantas vezes? ");
    scanf("%d", &ped);
    for (i = 1; i <= ped; i++)
    {
        num = dado();
        d[num - 1] += 1;
        num = 0;
    }
    sleep(1);
    system("cls");
    printf("\n\tNumero | Vezes");
    for (j = 0; j <= 5; j++)
    {
        printf("\n\t    %d  |  %d", j + 1, d[j]);
    }
    printf("\n\nSeu dado foi girado %d vezes.\n\n", ped);
    return 0;
}