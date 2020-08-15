#include <stdio.h>
#include <stdlib.h>

/* Sabe-se que o quilowatt de energia custa um quinto do salario minimo. Faca um programa que receba o valor do salario minimo
e a quantidade de quilowatts consumida por uma residencia, calcule e mostre:

a) o valor de cada quilowatt;
b) o valor a ser pago por essa residencia;
c) o valor a ser pago com desconto de 15%
*/

int main() {
	
	float valQuilowatt, salMinimo, valBruto, valLiquido;
	int quantQuilowatt;
	
	printf("Informe o valor do salario minimo: ");
	scanf("%f", &salMinimo);
	
	printf("Informe a quantidade de quilowatts consumida pela residencia: ");
	scanf("%d", &quantQuilowatt);
	
	valQuilowatt = salMinimo / 5;
	valBruto = valQuilowatt * quantQuilowatt;
	valLiquido = valBruto - (valBruto * 0.15);
	
	printf("\n O valor de cada quilowatt e R$ %.2f", valQuilowatt);
	printf("\n O valor a ser pago por essa residencia e R$ %.2f", valBruto);
	printf("\n O valor a ser pago por essa residencia com desconto e R$ %.2f", valLiquido);
	
	return 0;
	
}
