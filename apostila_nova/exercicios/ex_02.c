#include <stdio.h>
#include <locale.h>

float delta(float a, float b, float c) {
    return (b * b) - (4 * a * c);
}

int testapositivo(int num) {
    if(num >= 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");
    float cA, cB, cC, del;
    int positivo;

    printf("\tCalculadora de Delta\n");

    printf("\nDigite o primeiro coeficiente: ");
    scanf("%f", &cA);
    printf("Digite o segundo coeficiente: ");
    scanf("%f", &cB);
    printf("Digite o terceiro coeficiente: ");
    scanf("%f", &cC);

    del = delta(cA, cB, cC);

    positivo = testapositivo(del);

    if(positivo == 1) {
        printf("\nO valor de delta e %.2f.\n", del);
    }
    else {
        printf("\nOs coeficientes sao invalidos.\n");
    }
}