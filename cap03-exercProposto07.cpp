#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que receba o peso de uma pessoa, calcule e mostre: 

a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado;
*/

int main() {
	
	float peso, pEngordar, pEmagrecer;
	
	printf("Informe o peso da pessoa: ");
	scanf("%f", &peso);
	
	pEngordar = peso + (peso * 0.15);
	pEmagrecer = peso - (peso * 0.20);
	
	printf("\n O novo peso da pessoa engordando 15 porcento e igual a: %.2f", pEngordar);
	printf("\n O novo peso da pessoa emagrecendo 20 porcento e igual a: %.2f", pEmagrecer);
	
	return 0;
}


