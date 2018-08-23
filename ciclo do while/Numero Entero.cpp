/*
PROGRAMA:programa que pida un numero al usuario lo multiplique y lo reste por si mismo  
FECHA:22 de agosto del 2018
ELABORADO POR: Sergio Daniel Arias Rendon 
*/
#include <stdio.h>
using namespace std;
// funcion principal
int main() {
	//variables declaradas 
	int n, ntotal;
	char c;
	// ciclo do while para hacer lo pedido 
	do{
		printf("ingrese un Numero: ");
		scanf("%d", &n);
		ntotal=n*n-n;
		printf("%d * %d - %d = %d",n ,n, n, ntotal);
		
		printf ("\ndesea ingresar otro numero (s/n) ?: ");
		fflush (stdin);
		scanf ("%c", &c);
		printf("\n");
	} while(c!='n');
	return 0;
}

