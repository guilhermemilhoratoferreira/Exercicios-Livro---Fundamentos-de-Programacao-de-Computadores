#include <stdio.h>
#include <stdlib.h>

/* Sabe-se que:
	1 pé = 12 polegadas
	1 jarda = 3 pés
	1 milha = 1760 jardas
	
Faca um programa que receba uma medida em pes, faca as conversoes a seguir e mostre os resultados.

a) polegadas;
b) jardas;
c) milhas.
*/

int main() {
	
	float medida, polegadas, jardas, milhas;
	
	printf("Informe a medida em pes que sera convertida: ");
	scanf("%f", &medida);
	
	polegadas = medida * 12;
	jardas = medida / 3;
	milhas = jardas / 1760;
	
	printf("\n A conversao da medida em polegadas e igual a %.2f", polegadas);
	printf("\n A conversao da medida em jardas e igual %.2f", jardas);
	printf("\n A conversao da medida em milhas e igual %.2f", milhas);
	
	return 0;
}
