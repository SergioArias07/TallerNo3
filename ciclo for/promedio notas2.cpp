/*	programa: calcular el promedio de notas de n estudiantes
	fecha: 22 de agosto del 2018
	elaboado por: Sergio Daniel Arias Rendon 
*/


#include <stdio.h>
//funcion principal

int main() {
	// variables declaradas 
	int est;
	float N1, N2, N3, promedioN;
	//mensaje a mostrar en pantalla para ingresar la cantidad de estudiantes 
	printf("\n ingrese la cantidad de estudiantes \n");
	scanf("%d", &est);
	// ciclo for 
		for(int i = 1;i <= est;i++){
			fflush(stdin);
			printf("ingrese la nota numero 1 \n"); scanf("%f",&N1);
			printf("ingrese la nota numero 2 \n"); scanf("%f",&N2);
			printf("ingrese la nota numero 3 \n"); scanf("%f",&N3);
			
			promedioN = (N1 + N2 +N3)/3;
			
			printf("\n \n el promedio del estudiante %d  es %f \n ", i, promedioN) ;
		}
	
	
	
	return 0;
}

