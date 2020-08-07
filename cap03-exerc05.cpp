#include <stdio.h>
#include <stdlib.h>

//Faca um programa que receba o salario de um funcionario e o percentual de aumento, calcule e mostre o valor do aumento e o novo salario

int main(){
	
	float salario, valorAumento, novoSalario;
	int aumento;
	
	printf("Informe o salario do funcionario: ");
	scanf("%f", &salario);
	printf("Informe o percentual de aumento: ");
	scanf("%d", &aumento);
	
	valorAumento = salario * aumento / 100;
	novoSalario = salario + valorAumento;
	
	printf("O valor do aumento para o funcionario e de R$ %.2f. O novo salario do funcionario e R$ %.2f.", valorAumento, novoSalario);
	
	return 0;
}
