#include <stdio.h>
#include <stdlib.h>

/* Um trabalhador recebeu o seu salario e o depositou em sua conta bancaria. Esse trabalhador emitiu dois cheques e agora deseja saber o seu saldo atual.
Sabe-se que cada operacao bancaria de retirada paga CPMF de 0,38% e o saldo inicial da conta esta zerado.
*/

int main() {
	
	float salario, cheque1, cheque2, taxa1, taxa2, saldo;
	
	printf("Informe o valor do deposito: ");
	scanf("%f", &salario);
	
	printf("Informe o valor do primeiro cheque emitido: ");
	scanf("%f", &cheque1);
	
	printf("Informe o valor do segundo cheque emitido: ");
	scanf("%f", &cheque2);
	
	taxa1 = cheque1 * 0.038;
	taxa2 = cheque2 * 0.038;
	saldo = salario - cheque1 - taxa1 - cheque2 - taxa2;
	
	printf("O saldo atual e R$ %.2f", saldo);
	
	return 0;
	
}
