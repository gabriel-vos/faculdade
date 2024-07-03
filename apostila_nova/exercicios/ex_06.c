#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float maior(float num1, float num2, float num3) {
	if(num1 >= num2) {
		if(num1 >= num3) {
			return num1;
		}
		else {
			return num3;
		}
	}
	else {
		if (num2 >= num3) {
			return num2;
		}
		else {
			return num3;
		}
	}
}

int main() {
	setlocale(LC_ALL, "portuguese");
	system("cls");

	float num1, num2, num3, big;

	printf("*** Descubra o maior numero ***\n");
	printf("\nDigite um numero: ");
	scanf("%f", &num1);
	printf("Digite outro numero: ");
	scanf("%f", &num2);
	printf("Digite outro numero: ");
	scanf("%f", &num3);
	system("cls");
	
	big = maior(num1, num2, num3);

	printf("O maior numero digitado foi %.2f.\n\n", big);
}