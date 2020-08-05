#include <stdio.h>
#include <stdlib.h>

// Faca um programa que receba o salario de um funcionario, calcule e mostre o novo salario, sabendo-se que este salario sofre um aumento de 25%.

int main() {
	
	float salario, novoSalario;
	
	printf("Informe o salario do funcionario: ");
	scanf("%f", &salario);
	
	novoSalario = salario + (salario * 0.25);
	
	printf("O salario do funcionario com o aumento e R$ %.2f", novoSalario);
	
	return 0;
	
}
