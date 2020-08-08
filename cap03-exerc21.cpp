#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Uma pessoa deseja pregar um quadro em uma parede. Faca um programa para calcular e mostrar a que distancia a escada deve estar na parede.
A pessoa deve fornecer o tamanho da escada e a altura em que deseja pregar o quadro. Lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcancar.
*/

int main() {
	
	int disEscada, tamEscada, altQuadro;
	
	printf("Informe o tamanho da escada: ");
	scanf("%d", &tamEscada);
	
	printf("Informe a altura em que deseja pregar o quadro: ");
	scanf("%d", &altQuadro);
	
	disEscada = (pow(tamEscada, tamEscada) - pow(altQuadro, tamEscada));
	disEscada = sqrt(disEscada);
	
	printf("A distancia que a escada devera ficar da parede e: %d", disEscada);
	
	return 0;	
	
}
