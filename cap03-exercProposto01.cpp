#include <stdio.h>
#include <stdlib.h>

// Faca um programa que receba dois numeros, calcule e mostre a subtracao do primeiro numero pelo segundo

int main() {
	
	int num1, num2, subtracao;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	
	subtracao = num1 - num2;
	
	printf("A subtracao do primeiro numero pelo segundo e: %d", subtracao);
	
	return 0;
	
}
