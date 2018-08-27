#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: generar un arreglo numerico entero en el cual contenga 20
elementos ingresados por el usuario y mostrar cual de ellos son numeros impares
Fecha: 27 de Agosto
Creador: Juan David Hoyos Ramirez
*/
//funcion principal
int main(int argc, char *argv[]) {
	//variables
	int num[20];
	int i=0;
	//ciclo para ingresar los 20 numeros
	for(i=1;i<=20;i++)
	{
		printf("ingrese un numero\n");
		scanf ("%d",&num[i]);
		//desicion para identificar los pares y los impares
		if(num[i]%2==0)
		{
	
		}else{
			printf("es impar\n",&num[i]);
		}
	}
	return 0;
}

