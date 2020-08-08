#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que receba o ano de nascimento de uma pessoal e o ano atual, calcule e mostre:

a) a idade dessa pessoa;
b) quantos anos ela terá em 2050;
*/

int main(){
	
	int anoNasc, anoAtual, idade, idade2050;
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &anoNasc);
	
	printf("Informe o ano atual: ");
	scanf("%d", &anoAtual);
	
	idade = anoAtual - anoNasc;
	idade2050 = 2050 - anoNasc;
	
	printf("\n A idade atual e %d anos!", idade);
	printf("\n Em 2050 a idade sera de %d anos!", idade2050);
	
	return 0;
}
