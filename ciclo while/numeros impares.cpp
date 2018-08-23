/*PROGRAMA:imprimir en pantalla los numeros del 1 al 50 y hacer la suma de ellos 
FECHA: 22/08/2018
ELABORADO POR:Sergio Daniel Arias Rendon
*/
#include <stdio.h>

//funcion principal
int main(int argc, char *argv[]) {
	//variables declaradas 
	int acomulador=0, i;
	i=1;
	
	//ciclo while 
	while(i<=50){
		if (i % 2 != 0){
			printf("\n %d",i);
			acomulador = (acomulador + i);
		}
		
		i++;
	}
	
	
	printf("\n la suma de los numeros impares de %d  ", acomulador);
	
	
	return 0;
}

