#include <stdio.h>
#include <stdlib.h>

// Faca um programa que calcule e mostre a area de um triangulo.

int main() {
	
	float area, base, altura;
	
	printf("Informe o tamanho da base do triangulo: ");
	scanf("%f", &base);
	
	printf("Informe a altura do triangulo: ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	
	printf("A area do triangulo e igual a %.2f", area);
	
	return 0;
	
}
