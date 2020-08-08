#include <stdio.h>
#include <stdlib.h>

/* Pedro comprou um saco de racao com peso em quilos. Ele possui dois gatos, para que os quais fornece a quantidade de racao em gramas.
A quantidade diaria de racao fornecidade para cada gato e sempre a mesma. Faca um programa que receba o peso do saco de racao e a quantidade de racao fornecida para cada gato,
calcule e mostre quanto restara de racao no saco apos cinco dias.
*/

int main() {
	
	float pesoSaco, gato1, gato2, restoRacao;
	
	printf("Informe o peso do saco de racao em quilos: ");
	scanf("%f", &pesoSaco);
	
	printf("Informe a quantidade de racao fornecida ao primeiro gato: ");
	scanf("%f", &gato1);
	
	printf("Informe a quantidade de racao fornecidade ao segundo gato: ");
	scanf("%f", &gato2);
	
	gato1 = gato1 / 1000;
	gato2 = gato2 / 1000;
	
	restoRacao = pesoSaco - 5 * (gato1 + gato2);
	
	printf("O restante de racao apos 5 dias sera de %.2f", restoRacao);
	
	return 0;	
	
}
