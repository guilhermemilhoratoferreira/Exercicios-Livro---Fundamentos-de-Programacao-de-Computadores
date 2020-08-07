#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faca um programa que receba um numero positivo e maior que zero, calcule e mostre:

a) o numero digitado ao quadrado;
b) o numero digitado ao cubo;
c) a raiz quadrada do numero digitado;
d) a raiz cubica do numero digitado;

*/

int main(){
	
	float numero, quadrado, cubo, rquad, rcub;
	
	printf("Informe um numero positivo e maior que zero: ");
	scanf("%f", &numero);
	
	quadrado = pow(numero, 2);
	cubo = pow(numero, 3);
	rquad = sqrt(numero);
	rcub = cbrt(numero);
	
	printf("\n O numero digitado ao quadrado e: %.2f \n", quadrado);
	printf("\n O numero digitado ao cubo e: %.2f \n", cubo);
	printf("\n A raiz quadrada do numero e: %.2f \n", rquad);
	printf("\n A raiz cubica do numero e: %.2f \n", rcub);
	
	return 0;
	
}
