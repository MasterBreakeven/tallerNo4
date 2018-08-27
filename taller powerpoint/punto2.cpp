#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: arreglo con 10 elementos con ciclo for y muestra cual es el mayor
Fecha: 27 de Agosto
Creador: Juan David Hoyos Ramirez
*/
int main(int argc, char *argv[]) {
	int num [10]={0,10,5,8,7,6};
	int i=0,j=0;
	for (j=0;j<10;j++)
	{
		if (num[j]>num[i])//define que dato es mayor al nterior
		{
			i=j;
		}
	}
	printf("\n el elemento mayor es %d",num[i]);
	return 0;
}

