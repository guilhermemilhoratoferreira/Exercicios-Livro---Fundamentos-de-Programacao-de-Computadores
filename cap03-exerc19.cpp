#include <stdio.h>
#include <stdlib.h>

/* Cada degrau de uma escada tem X de altura. Faca um programa que receba essa altura e a altura que o usuario deseja alcancar subindo a escada,
calcule e mostre quantos degraus ele devera subir para atingir seu objetivo, sem se preocupar com a altura do usuario. Todas as medidas fornecidades devem estar em metros.
*/

int main() {
	
	float alturaDegrau, alturaUsuario, quantDegrau;
	
	printf("Informe a altura do degrau: ");
	scanf("%f", &alturaDegrau);
	
	printf("Informe a altura que deseja alcancar: ");
	scanf("%f", &alturaUsuario);
	
	quantDegrau = alturaUsuario / alturaDegrau;
	
	printf("A quantidade de degraus a subir pelo usuario ate o objetivo e: %.2f", quantDegrau);
	
	return 0;
}
