//Programa 2 de punteros //
#include <conio.h>
#include <stdio.h>
int valor_casilla(int arreglo[]);
int main()
{
	int datos[8]={23,6,4,0,200,9,7,5};
	int i=0;                   //inicializacion//
	for(i=0;i<8;i++)           //ciclo para la impresion del arreglo//
	{
		printf("El elemento de la casilla %d del arreglo es:   %d\n",i,datos[i]);
	}
	valor_casilla(datos);
	getch();
	return 0;
}
int valor_casilla(int arreglo[])          //funcion para que imprima el arreglo desde el puntero//
{
	printf("Los elementos del arreglo a travez del puntero son:\n");
	int j=0;
	int punt1=0;
	for(j=0;j<8;j++)                     //imprime la posicion del puntero//  
	{
		int punt1=arreglo[j];                 //se le asigna//
		printf("La direccion de la casilla es: %d  el valor guardado es %d",&punt1,punt1);
    }
    return 0;
}

