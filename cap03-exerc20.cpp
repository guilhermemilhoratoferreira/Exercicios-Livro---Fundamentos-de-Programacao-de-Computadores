#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faca um programa que recaba a medida do angulo formado por uma escada apoiada no chao e encostada na parede
e a altura da parede onde esta a ponta da escada, calcule e mostre a medida desta escada.
*/

int main() {
	
	float angulo, altParede, tamEscada, radiano;
	
	printf("Informe a medida do angulo formado pela escada: ");
	scanf("%f", &angulo);
	
	printf("Informe a altura da parede que a escada esta apoiada: ");
	scanf("%f", &altParede);
	
	radiano = angulo * 3.14 / 180;
	tamEscada = altParede / sin(radiano);
	
	printf("A medida da escada e: %.2f", tamEscada);
	
	return 0;
}
