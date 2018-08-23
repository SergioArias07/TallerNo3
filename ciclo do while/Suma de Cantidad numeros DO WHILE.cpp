/*PROGRAMA:sumar los primeros numeros imapres del 1 al 50
FECHA: 21/08/2018
ELABORADO POR:Sergio Daniel Arias Rendon
*/
#include <stdio.h>
using namespace std;
//funcion principal
int main() {
	// varables declaradas
	int n, aco=0;
	//mensajes a mostrar en pantalla
	printf ("Para saber la suma y finalizar presione cero\n");
	printf ("ingresa la cantidad de numeros deseados\n");
	//ciclo do while para hacer la suma de los numeros ingresados 
	do{
		
	printf("ingrese un Numero: ");
	scanf("%d", &n);
	aco=aco+n;
	}while (n != 0);
	printf ("la suma de los numeros ingresados es de: %d ", aco);
	
	return 0;
}

