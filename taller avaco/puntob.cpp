#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: inicializar un arreglo numero decimalde 4 elementos, mostrados
en pantalla y realizar la suma de los elementos
Fecha: 27 de Agosto
Creador: Juan David Hoyos Ramirez
*/
//funcion principal
int main(int argc, char *argv[]) {
	//variables
	float num[]={1,7.5,5,12.5};
	float sum=0;
	//ciclo for para realizar la suma
	for(int i=0;i<4;i++)
	{
		printf ("%.2f\n",num[i]);
		sum=sum+num[i];
	}
	printf("el resultado es: %.2f",sum);
	
	return 0;
}

