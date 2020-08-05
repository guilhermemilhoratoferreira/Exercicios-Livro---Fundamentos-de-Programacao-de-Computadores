#include <stdio.h>
#include <stdlib.h>

// Faca um programa que receba tres notas, calcule e mostre a media aritmetica entre elas.

int main(){
	
	float nota1, nota2, nota3, soma, media;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Informe a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Informe a terceira nota: ");
	scanf("%f", &nota3);
	
	soma = nota1 + nota2 + nota3;
	media = soma / 3;
	
	printf("A media da notas e %.2f", media);
	
	return 0;
	
}
