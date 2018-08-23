
/*	Programa:area de 5 circunferencias de radio
	fecha: 21 de agosto del 2018
	Elaborado por: Sergio Daniel Arias Rendon
*/



#include <stdio.h>

	// funcion principal
int main(int argc, char *argv[]) {
		//variables declaradas
		float area,radio;
		int i;
		
		// ciclo for el cual encuentra la circunferencia  del radio 
		for(i = 1; i<=5;i++){
			printf("\n introduzca radio %d: ", i);
		scanf("%f", &radio);
		
		area = 3.1416 * radio * radio;
		
		printf(" \n el area de la circunferencia %d es: %.2f ", i, area);
		}
		
	
	
	
	
	return 0;
}

