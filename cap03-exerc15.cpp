#include <stdio.h>
#include <stdlib.h>

/* O custo ao consumidor de um carro novo é a soma do preço de fabrica com o percentual de lucro distribuidor e dos impostos aplicados ao preco de fabrica.
Faca um programa que receba o preco de fabrica de um veiculo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:

a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preco final do veiculo.
*/

int main(){
	
	float precoFab, percentDist, percentImposto, vLucroDist, vImposto, precoFinal;
	
	printf("Informe o preco de fabrica do veiculo: ");
	scanf("%f", &precoFab);
	
	printf("Informe o percentual de lucro do distribuidor: ");
	scanf("%f", &percentDist);
	
	printf("Informe o percentual de imposto: ");
	scanf("%f", &percentImposto);
	
	vLucroDist = precoFab * percentDist / 100;
	vImposto = precoFab * percentImposto / 100;
	precoFinal = precoFab + vLucroDist + vImposto;
	
	printf("O custo final ao consumidor sera de R$ %.2f", precoFinal);
	
	return 0;
}
