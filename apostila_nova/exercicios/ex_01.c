#include <stdio.h>
#include <locale.h>

void testanulo(float num) {
    if(num == 0) {
        printf("O numero e nulo.");
    }
    else {
        printf("O numero nao e nulo.");
    }
}

int main() {
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);

    testanulo(num);
}