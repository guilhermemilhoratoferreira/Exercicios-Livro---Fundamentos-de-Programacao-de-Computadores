#include <stdio.h>
#include <stdlib.h>

// Faca um programa que receba tres numeros, calcule e mostre a multiplicacao desses numeros

int main() {
	
	int num1, num2, num3, multiplicacao;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	
	printf("Informe o terceiro numero: ");
	scanf("%d", &num3);
	
	multiplicacao = num1 * num2 * num3;
	
	printf("Os tres numeros multiplicados e igual a: %d", multiplicacao);
	
	return 0;
}
