#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que receba o custo de um espetaculo teatral e o preco do convite desse espetaculo.
Esse programa devera calcular e mostrar a quantidade de convites que devem ser vendidos para que pelo menos o custo do espetaculo seja alcancado.*/

int main() {
	
	float custo, valConvite;
	int quantConvite;
	
	printf("Informe o valor do espetaculo teatral: ");
	scanf("%f", &custo);
	
	printf("Informe o preco do convite do espetaculo: ");
	scanf("%f", &valConvite);
	
	quantConvite = custo / valConvite;
	
	printf("A quantidade de convite que devera ser vendido para alcancar ao menos o custo do espetaculo e de: %d", quantConvite);
	
	return 0;
	
}
