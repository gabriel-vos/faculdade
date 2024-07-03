#include <stdio.h>
#include <locale.h>

float testamaior(float num1, float num2) {
    if(num1 > num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");
    float num1, num2, maior;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);

    maior = testamaior(num1, num2);

    printf("\n%.2f e maior.", maior);
}