/*
PROGRAMA: calcular la mitad de un número siempre y cuando el 
numero ingresado sea distinto a 0 y 1
FECHA: 21 de agosto del 2018
ELABORADO POR: Sergio Daniel Arias Rendon 
*/
#include <stdio.h>
using namespace std;
// funcion principal
int main() {
	
	// variables definidas
	float n;
	
	printf("Introduzca un numero real ");
	scanf ("%f", &n);
	
	while(n != 0 && n !=1){
		printf("la mitad de %2.f es: %.2f", n, n / 2);
		printf("\nsi desea seguir introduzca otro numero real: ");
		scanf ("%f", &n);
	}
	return 0;
}

