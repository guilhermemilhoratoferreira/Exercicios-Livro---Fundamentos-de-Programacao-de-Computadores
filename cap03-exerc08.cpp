#include <stdio.h>
#include <stdlib.h>

// Faca um programa que receba o valor de um deposito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do deposito

int main(){
	
	float deposito, rendimento, valorTotal;
	int taxa;
	
	printf("Informe o valor do deposito: ");
	scanf("%f", &deposito);
	
	printf("Informe o valor da taxa de juros: ");
	scanf("%d", &taxa);
	
	rendimento = deposito * taxa / 100;
	valorTotal = deposito + rendimento;
	
	printf("O valor de rendimento e R$ %.2f e o valor total e R$ %.2f", rendimento, valorTotal);
	
	return 0;
}
