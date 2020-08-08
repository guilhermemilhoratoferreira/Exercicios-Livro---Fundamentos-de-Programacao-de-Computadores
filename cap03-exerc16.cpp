#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que receba o numero de horas trabalhadas e o valor do salario minimo, calcule e mostre o salario a receber seguindo estas regras:

a) a hora trabalhada vale a metade do salario minimo.
b) o salario bruto equivale ao numero de horas trabalhadas multiplicado pelo valor da hora trabalhada.
c) o imposto equivale a 3% do salario bruto.
d) o salario a receber equivale ao salario bruto menos o imposto.
*/

int main(){
	
	int horasTrab;
	float salMinimo, salReceber, vHoraTrab, salBruto, imposto;
	
	printf("Informe o valor do salario minimo: ");
	scanf("%f", &salMinimo);
	
	printf("Informe a quantidade de horas trabalhadas: ");
	scanf("%d", &horasTrab);
	
	vHoraTrab = salMinimo / 2;
	salBruto = vHoraTrab * horasTrab;
	imposto = salBruto * 0.3;
	salReceber = salBruto - imposto;
	
	printf("O salario a receber e R$ %.2f", salReceber);
	
	return 0;
	
}
