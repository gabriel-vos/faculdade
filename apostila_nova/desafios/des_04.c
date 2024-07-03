#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int inverter(int num)
{
    int invertido = 0, digito;
    while (num != 0)
    {
        digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }
    return invertido;
}

int main()
{   
    int num, invert;
    system("cls");
    printf("\t======== Inversor de numeros! ========\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    invert = inverter(num);
    printf("Numero invertido: %d\n\n", invert);
}