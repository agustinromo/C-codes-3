//Programa que exige un arreglo de  numeros del 8 al 16 en orden //
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int num=0,i=0;
	printf("Escribe los numeros del 8 al 16, uno por uno y en orden\n"); //El programa pide los numeros//
	for (i=8;i<=16;i++)//Aplicacion del ciclo for para realizar el orden de los numeros//
	{
	printf("Escribe el numero de la posicion ",i);
	scanf("%d",&num);
	if(num!=i)//Comparativo if para la comprobacion en caso de que no se cumpla la regla principal//
	{
		printf("No seguiste el orden y el programa acabara"); //Si la principal regla no se cumple el programa se cancela//
		system("pause>nul");
		return 0;
	}
	}
	printf("\n Bien, lo has hecho de la forma correcta");
	system ("pause>nul");
    return 0;
}
