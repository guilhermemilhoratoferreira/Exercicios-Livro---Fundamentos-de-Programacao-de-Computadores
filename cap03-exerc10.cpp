#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Faca um programa que calcule e mostre a area de um circulo

int main(){
	
	float area, raio;
	
	printf("Informe o raio do circulo: ");
	scanf("%f", &raio);
	
	area = 3.14 * (pow(raio, 2));
	
	printf("A area do circulo e: %.2f", area);
	
	return 0;
}
