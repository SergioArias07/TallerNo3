/*
PROGRAMA:Realice un programa que solicite la entra de un numero entero
del 1 al 10 y muestre en su salida la tabla de multiplicar 
FECHA:20 de agosto del 2018
ELABORADO POR: Sergio Daniel Arias Rendon 
*/
#include <stdio.h>
using namespace std;
// funciion
int main() {
	
	//variables definidas
	char c;
	int i, num;
	
	//inicia repita mientras para multiplicar 
	do
		{
		printf("Ingrese un numero entero: ");
		scanf("%d", &num);
		printf("\nla tabla de multiplicar del numero %d es: \n\n", num);
		
		// iniciamos tabla de multiplicar
		for(i=0; i<=10; i++){
			printf("%d * %d = %d \n", i, num, i * num);
		}
		printf ("\n desea visualizar otra tabla de multiplicar (s/n) ?: ");
		fflush (stdin);
		scanf ("%c", &c);
		printf("\n");
	} while(c != 'n');
	
	return 0;
}

