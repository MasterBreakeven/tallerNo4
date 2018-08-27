#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: arreglo que genere 100 numeros pares y genere su suma
Fecha: 27 de Agosto
Creador: Juan David Hoyos Ramirez
*/
//funcion principal
int main(int argc, char *argv[]) {
	//variables
	int z,sum,i,num[100];
	i=0;
	sum=0;
	//ciclo for donde dice que los numeros esten comprendidos entre 1 y 100
	for (z=1;z<=100;z++)
	{
		
		//desicion para saber cuales son los numeros pares
		if (z%2==0)
		{
			num[i]=z;
			i++;
		}
	}
	//ciclo for donde suma los 100 numeros
	for (z=0;z<i;z++)
	{
		sum=sum+num[z];
	}
	
	printf("%d\n",sum);
	
	return 0;
}

