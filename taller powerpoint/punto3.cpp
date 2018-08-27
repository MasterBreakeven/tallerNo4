#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: arreglo que imprime los primeros 100 numeros enteros en orden 
descendiente 
Fecha: 27 de Agosto
Creador: Juan David Hoyos Ramirez
*/
//funcion principal
int main(int argc, char *argv[]) {
	//variables
	int i,num[100];
		for(i=1;i<=100;i++)
	{
		num[i]=i;
	}
		//ciclo for para mostrar los numeros en orden descendiente
		for(i=100;i>=1;i--)
		{
			printf("%d\n",num[i]);
		}
	return 0;
}

