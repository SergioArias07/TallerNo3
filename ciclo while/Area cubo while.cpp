/*PROGRAMA:Escriba un programa que calcule el Area de un cubo, mientras 
sus lados sean diferentes de 0.
FECHA: 21/08/2018
ELABORADO POR:Sergio Daniel Arias Rendon
*/
#include <stdio.h>
using namespace std;
//funcion principal 
int main() {
	//variables declaradas
	int  lado, area, cara;
	// mensaje a mostrar en pantalla y se pueda ingresar su valor
	printf("usuario Tenga en cuenta que para el programa no cerrar el lado no puede ser cero \n");
	printf("Ingrese el lado del cubo para hayar su area: ");
	scanf("%d", &lado);
		//ciclo while para determinar lo pedido hallando una cara del cubo y asi poder hayar el area
	while (lado!= 0){
		
		cara=lado*lado;
		printf("una de las caras del cubo es de: %d'n", cara);
		
		area = (cara * 6);
		printf("El Area total del cubo es de: %d", area);
		
		lado=0;
	}
	
	return 0;
}

