#include <stdio.h>
#include <stdlib.h>

// Faca um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

int main() {
	
	float pKilos, pGramas;
	
	printf("Informe o peso da pessoa em kilos: ");
	scanf("%f", &pKilos);
	
	pGramas = pKilos * 1000;
	
	printf("O peso da pessoa em gramas e igual a: %.2f", pGramas);
	
	return 0;
}
