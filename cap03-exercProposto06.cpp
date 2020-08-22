#include <stdio.h>
#include <stdlib.h>

/* Um funcionario recebe um salario fixo, mais 4% de comissão sobre as vendas.
Faca um programa que receba o salario fixo do funcionario e o valor de suas vendas, calcule e mostre a comissao e seu salario final.
*/

int main() {
	
	float salario, valVendas, comissao, salFinal;
	
	printf("Informe o valor do salario do funcionario: ");
	scanf("%f", &salario);
	
	printf("Informe o valor total das vendas do funcionario: ");
	scanf("%f", &valVendas);
	
	comissao = valVendas * 0.04;
	salFinal = salario + comissao;
	
	printf("O salario final do funcionario e R$ %.2f", salFinal);
	
	return 0;
	
}
