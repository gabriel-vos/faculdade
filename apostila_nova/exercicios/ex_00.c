#include <stdio.h>
#include <locale.h>

void testapositivo(int num) {
    if(num >= 0) {
        printf("\nO numero e positivo.");
    }
    else {
        printf("\nO numero e negativo.");
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int num;
    printf("\tTeste impar ou par\n\n");
    printf("Digite um numero: ");
    scanf("%d", &num);

    testapositivo(num);
}