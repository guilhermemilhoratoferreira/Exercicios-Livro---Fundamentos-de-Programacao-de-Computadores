#include <stdlib.h>
#include <stdio.h>

// Faça um programa que receba quatro numeros inteiros, calcule e mostre a soma desses numeros

int main(){
	
	int num1, num2, num3, num4, soma;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	printf("Informe o terceiro numero: ");
	scanf("%d", &num3);
	printf("Informe o quarto numero: ");
	scanf("%d", &num4);
	
	soma = num1 + num2 + num3 + num4;
	
	printf("A soma dos quatro numeros inteiros e %d", soma);
	
	return 0;

}

