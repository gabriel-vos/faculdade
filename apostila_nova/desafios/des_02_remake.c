#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int num[2], i, mdc;
    system("cls");
    printf("\t=== Maior divisor comum ===\n");
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num[1]);
    printf("Digite o segundo numero: ");
    scanf("%d", &num[2]);
    for (i = num[1]; i >= 0; i--)
    {
        if (num[1] % i == 0)
        {
            if (num[2] % i == 0)
            {
                mdc = i;
                printf("\nO maior divisor comum entre eles e %d.\n\n", mdc);
                break;
            }
        }
    }
}