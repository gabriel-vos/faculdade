#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <unistd.h>

typedef struct
{
    float maior;
    float medio;
    float menor;
} Resultado;

Resultado maior(float num1, float num2, float num3)
{
    Resultado resultado;
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            resultado.maior = num1;
            if (num2 > num3)
            {
                resultado.medio = num2;
                resultado.menor = num3;
            }
            else
            {
                resultado.medio = num3;
                resultado.menor = num2;
            }
        }
        else
        {
            resultado.maior = num3;
            resultado.medio = num1;
            resultado.menor = num2;
        }
    }
    else if (num2 > num3)
    {
        resultado.maior = num2;
        if (num1 > num3)
        {
            resultado.medio = num1;
            resultado.menor = num3;
        }
        else
        {
            resultado.medio = num3;
            resultado.menor = num1;
        }
    }
    else
    {
        resultado.maior = num3;
        resultado.medio = num2;
        resultado.menor = num1;
    }
    return resultado;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    float n[3], med3, med2big, med2small;
    Resultado res;
    system("cls");
    printf("\t====== Calculo de media! ======\n");
    printf("\nDigite a primeira nota: ");
    scanf("%f", &n[1]);
    printf("Digite a segunda nota: ");
    scanf("%f", &n[2]);
    printf("Digite a terceira nota: ");
    scanf("%f", &n[3]);
    res = maior(n[1], n[2], n[3]);
    med3 = (n[1] + n[2] + n[3]) / 3;
    med2big = (res.maior + res.medio) / 2;
    med2small = (res.maior + res.menor) / 2;
    printf("\nSua media com as 3 notas seria %.2f\n", med3);
    printf("Sua media com suas duas maiores notas seria %.2f\n", med2big);
    printf("Sua media com a maior e menor nota seria %.2f\n\n", med2small);
}