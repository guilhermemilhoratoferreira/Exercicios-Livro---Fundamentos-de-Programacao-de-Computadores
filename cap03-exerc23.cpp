#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faca um programa que receba um numero real, calcule e mostre:

a) a parte inteira desse numero;
b) a parte fracionaria desse numero;
c) o arredondamento desse numero;
*/

int main() {
	
	float numero, pFracionaria;
	int pInteira, arredondamento;
	
	printf("Informe um numero real: ");
	scanf("%f", &numero);
	
	pInteira = numero;
	pFracionaria = numero - pInteira;
	arredondamento = round(numero);
	
	
	printf("\n A parte inteira do numero e: %d", pInteira);
	printf("\n A parte fracionaria do numero e: %.2f", pFracionaria);
	printf("\n O numero arredondado e: %d", arredondamento);
	
	return 0;	
	
}
