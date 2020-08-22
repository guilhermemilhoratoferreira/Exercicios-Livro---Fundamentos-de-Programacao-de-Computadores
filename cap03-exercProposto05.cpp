#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que receba o preco de um produto, calcule e mostre o novo preco,
sabendo-se que este sofreu um desconto de 10%
*/

int main() {
	
	float preco, novoPreco;
	
	printf("Informe o preco do produto: ");
	scanf("%f", &preco);
	
	novoPreco = preco + (preco * 0.10);
	
	printf("O novo preco do produto com desconto e R$ %.2f", novoPreco);
	
	return 0;
	
}
