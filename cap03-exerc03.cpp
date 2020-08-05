#include <stdio.h>
#include <stdlib.h>

// Faca um programa que receba tres notas e seus respectivos pesos, calcule e mostre a media ponderada dessas notas

int main(){
	
	float nota1, nota2, nota3, peso1, peso2, peso3, media;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	printf("Informe o peso da primeira nota: ");
	scanf("%f", &peso1);
	
	printf("Informe a segunda nota: ");
	scanf("%f", &nota2);
	printf("Informe o peso da segunda nota: ");
	scanf("%f", &peso2);
	
	printf("Informe a terceira nota: ");
	scanf("%f", &nota3);
	printf("Informe o peso da terceira nota: ");
	scanf("%f", &peso3);
	
	media = ((nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / peso1+peso2+peso3);
	
	printf("A media das notas e %.2f", media);
	
	return 0;
	
}
