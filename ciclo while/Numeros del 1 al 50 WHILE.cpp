/*PROGRAMA:imprimir en pantalla los numeros del 1 al 50
FECHA: 21/08/2018
ELABORADO POR:Sergio Daniel Arias Rendon
*/
#include <stdio.h>
using namespace std;
//funcion declaradas 
int main() {
	// variable declarada inicializada en 1
	int n=1;
	//mensaje en pantalla para el usuario
	printf("Los numeros del 1 al 50 ");
	
// ciclo while para imprimir los numeros del 1al 50
	while(n<=50){
	if(n%2==0){
		printf("los numeros impares son: %d",n);
		
	}

	}
	
	return 0;
}

