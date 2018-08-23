/*
PROGRAMA: Escribir un programa que muestre por pantalla todos los numeros
pares que hay entre el 1-1000 
FECHA: 21 de agosto del 2018
ELABORADO POR: Sergio Daniel Arias Rendon 
*/
#include <stdio.h>
using namespace std;

//funcion principal 
int main() {
	
	int i;
	//mensaje en pantalla para el usuario
	printf ("Los numeros Pares del 1-1000:\n");
		
	for (i=2;i<=1000; i++){
		if(i%2==0){
			printf("%d ", i); 
		}
	}
}
