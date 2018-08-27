#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: generar un arreglo numerico entero en el cual contenga 10
elementos ingresados por el usuario y mostrar cual de ellso sonnumeros pares
Fecha: 27 de Agosto
Creador: Juan David Hoyos Ramirez
*/
//funcion principal
int main(int argc, char *argv[]) {
	//variables
	int num[10];
	int i=0;
	//ciclo para ingresar los 10 numeros
	for(i=1;i<=10;i++)
	{
		printf("ingrese un numero\n");
		scanf ("%d",&num[i]);
	//desicion para identificar los pares
	if(num[i]%2==0)
	{
		
		printf("es par\n",&num[i]);
	}
	}
	return 0;
}

