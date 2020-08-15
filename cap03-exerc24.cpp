#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que receba uma hora formada por hora e minutos (um numero real), calcule e mostre a hora digitada apenas em minutos. Lembre-se de que:
- para quatro e meia, deve-se digitar 4.30;
- os minutos vão de 0 a 59.
*/

int main() {
	
	float hora, m;
	int h, conversao;
	
	printf("Informe a hora que deseja converter em minutos: ");
	scanf("%f", &hora);
	
	h = hora;
	m = hora - h;
	conversao = (h * 60) + (m * 100);
	
	printf("\n A conversao da hora em minutos e um total de %d minutos!", conversao);
	
	return 0;
}
