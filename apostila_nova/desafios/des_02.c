#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int maior(int num1, int num2)
{
    if (num1 >= num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int num1, num2, i, mdc;
    system("cls");
    printf("\t=== Maior divisor comum ===\n");
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    for (i = maior(num1, num2); i >= 0; i--)
    {
        if (num1 % i == 0)
        {
            if (num2 % i == 0)
            {
                mdc = i;
                printf("\nO maior divisor comum entre eles e %d.\n\n", mdc);
                break;
            }
        }
    }
}