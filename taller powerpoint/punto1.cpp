#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: pide 5 calificaciones y saca el promedio de estas
Fecha: 23 de Agosto
Creador: Juan David Hoyos Ramirez
*/

//funcion principal
int main(int argc, char *argv[]) {
	float cali[5];
	float prom = 0;
	
	//iniciar el arreglo para introducir datos por el usuario
	for(int i = 0; i < 5; i++){
		printf("Ingrese la nota %d: \n", i + 1);
		scanf("%f", &cali[i]);
		prom += cali[i];
		printf("\n");
	}
	printf("Las notas son:\n");
	for(int i = 0; i < 5; i++){
		printf("%.2f\n", cali[i]);
	}
	printf("El promedio de notas es %.2f: ", prom / 5);
	
	return 0;
}

