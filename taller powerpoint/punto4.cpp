#include <iostream>
#include <stdio.h>
using namespace std;
/*
Programa: lee 5 números por teclado, los copie a otro array multiplicados por 2 
y los muestre todos ordenados usando un tercer array.
Fecha: 27 de Agosto
Creador: Juan David Hoyos Ramirez
*/
//funcion principal
int main(int argc, char *argv[]) {
	int i,num1[5],num2[5],num3[10];
	//ciclo for donde pide los 5 numeros y los almacena en el primer array
	for (i=0;i<5;i++){
		printf("Ingresa el dato\n");
		scanf("%d",&num1[i]);
		printf("\n");
	}
	//ciclo for donde multiplica los numeros por 2 en el segundo array
	for(i=0;i<5;i++)
	{
		num2[i]=num1[i]*2;
	}
	//ciclo for donde muestra los numeros ingresados en el primer array
	for(i=0;i<5;i++)
	{
		num3[i]=num1[i];
	}
/*ciclo for donde se almacenan los numeros ingresados y los suma junto los 
multiplicados para mostrarlos en el tercer array*/
	for(i=0;i<5;i++)
	{
		num3[5+i]=num2[i];
	}
	/*ciclo for donde muestra los resultados de los numeros este es el tercer
	array*/
	for (i=0;i<10;i++){
		printf("%d\n",num3[i]);
	}
	
	return 0;
}

