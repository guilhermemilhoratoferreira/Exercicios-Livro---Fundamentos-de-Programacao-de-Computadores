#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que receba duas notas, calcule e mostre a media ponderada dessas notas,
considerando peso 2 para a primeira nota e peso 3 para a segunda.
*/

int main() {
	
	float nota1, nota2, media;
	
	printf("Informe o valor da primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Informe o valor da segunda nota: ");
	scanf("%f", &nota2);
	
	media = ((nota1 * 2) + (nota2 * 3));
	
	printf("A media ponderada e: %.2f", media);
	
	return 0;
}
