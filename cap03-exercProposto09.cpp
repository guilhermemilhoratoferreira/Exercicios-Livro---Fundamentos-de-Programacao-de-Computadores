#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que calcule e mostre a area de um trapezio.
Sabe-se que: A = ((base maior + base menor) * altura) / 2.
*/

int main() {
	
	float area, baseMaior, baseMenor, altura;
	
	printf("Informe o valor da base maior do trapezio: ");
	scanf("%f", &baseMaior);
	
	printf("Informe o valor da base menor do trapezio: ");
	scanf("%f", &baseMenor);
	
	printf("Informe o valor da altura do trapezio: ");
	scanf("%f", &altura);
	
	area = ((baseMaior + baseMenor) * altura) / 2;
	
	printf("A area do trapezio e de: %.2f", area);
	
	return 0;
	
}
