/*PROGRAMA:imprimir en pantalla los numeros primos  del 1 al 50
FECHA: 22/08/2018
ELABORADO POR:Sergio Daniel Arias Rendon
*/
#include <stdio.h>

//Funcion principal
int main() {
	
	// variables declaradas 
	int i =1, acomulador =0, contador =0, x;
	//ciclo while para determinar los numeros primos 
	while(i<=50){
		contador =0;
		
		for(x = 1; x <= i;x++){
			if(i % x == 0){
				contador++;
			}
		}
		if (contador == 2){
			printf("\n %d",i);
			acomulador = (acomulador + i);
		}
		i++;
	}
	
	printf("\n la suma total de los numeros primos es %d  ", acomulador);
	
	
	return 0;
}

