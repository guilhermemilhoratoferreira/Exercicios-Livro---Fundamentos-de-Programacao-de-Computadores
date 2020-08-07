#include <stdio.h>
#include <stdlib.h>

/*Faca um programa que receba o salario base de um funcionario, calcule e mostre o salario a receber,
sabendo-se que o funcionario tem gratificacao de 5% sobre o salario base e paga imposto de 7% sobre este salario.*/

int main(){
	
	float salarioBase, salarioReceber, gratificacao, imposto;
	
	printf("Informe o salario base do funcionario: ");
	scanf("%f", &salarioBase);
	
	gratificacao = salarioBase * 0.5;
	imposto = salarioBase * 0.7;
	salarioReceber = salarioBase + gratificacao - imposto;
	
	printf("O salario a receber pelo funcionario e R$ %.2f", salarioReceber);
	
	return 0;	
}
