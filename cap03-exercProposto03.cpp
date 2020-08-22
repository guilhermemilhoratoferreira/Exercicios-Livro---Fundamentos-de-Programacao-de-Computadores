#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que receba dois numeros, calcule e mostre a divisao do primeiro numero pelo segundo.
Sabe-se que o segundo numero nao pode ser zero, portanto, nao é necessario se preocupar com validacoes
*/

int main() {
	
	float num1, num2, divisao;
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Informe o segundo numero: ");
	scanf("%f", &num2);
	
	divisao = num1 / num2;
	
	printf("O primeiro numero dividido pelo segundo e igual a: %.2f", divisao);
	
	return 0;
}
