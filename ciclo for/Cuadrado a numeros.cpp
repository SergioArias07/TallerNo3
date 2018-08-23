
/*
PROGRAMA: Escribir un programa que muestre por pantalla los cuadrados de los 10 primeros numeros naturales
pares que hay entre el 1-1000 
FECHA: 21 de agosto del 2018
ELABORADO POR: Sergio Daniel Arias Rendon 
*/#include <iostream>
using namespace std;
// funcion Principal
int main() {
	//variables declaradas
	int i, n=1;
	// ciclo for para sacar el cuadrado 
	for(i=1; i<=10; i++){
	printf("%d * %d = %d\n", i, i, n * n );
	n=n+1;
	}
	
	
	
	return 0;
}

