#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Faca um programa que receba dois numeros maiores que zero, calcule e mostre um elevado ao outro.

int main(){
	
	float num1, num2, calc1, calc2;
	
	printf("Informe o primeiro numero maior que zero: ");
	scanf("%f", &num1);
	
	printf("Informe o segundo numero maior que zero: ");
	scanf("%f", &num2);
	
	calc1 = pow(num1, num2);
	calc2 = pow(num2, num1);
	
	printf("\n O primeiro numero elevado ao segundo e igual a: %.2f", calc1);
	printf("\n O segundo numero elevado ao primeiro e igual a: %.2f", calc2);
	
	return 0;
}
