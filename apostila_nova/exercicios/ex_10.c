#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char resp;
    int op;
    float temp, res;
    while (resp != 'n')
    {
        system("cls");
        printf("\t===== Conversor de temperatura! =====\n");
        printf("\n1. Celsius para farenheit");
        printf("\n2. Farenheit para celsius\n");
        printf("\n0. Sair\n");
        printf("\n\tDigite uma opcao: ");
        scanf("%d", &op);
        if (op == 0)
        {
            break;
        }
        system("cls");
        printf("\nDigite uma temperatura: ");
        scanf("%f", &temp);
        system("cls");
        switch (op)
        {
        case 1:
            res = (9 * temp / 5) + 32;
            printf("%.2f em farenheit sao %.2f graus.\n", temp, res);
            break;

        case 2:
            res = 5 * (temp - 32) / 9;
            printf("%.2f em celsius sao %.2f graus.\n", temp, res);
            break;
        }
        printf("\nDeseja retornar ao menu? [s/n]: ");
        scanf(" %c", &resp);
    }
    system("cls");
    printf("Ate logo!\n\n");
}