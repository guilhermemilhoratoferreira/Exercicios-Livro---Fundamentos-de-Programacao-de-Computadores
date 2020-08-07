#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que receba o salario base de um funcionario, calcule e mostre o seu salario a receber,
sabendo-se que o funcionario tem gratificacao de R$ 50 e paga imposto de 10% sobre o salario base. */

int main(){
	
	float salarioBase, salarioReceber, imposto;
	
	printf("Informe o salario base do funcionario: ");
	scanf("%f", &salarioBase);
	
	imposto = salarioBase * 0.10;
	salarioReceber = salarioBase - imposto + 50;
	
	printf("O salario a receber pelo funcionario e R$ %.2f", salarioReceber);
	
	return 0;
	
}
