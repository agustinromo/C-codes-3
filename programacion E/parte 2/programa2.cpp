//Programa que realiza la sumatoria de 10 numeros y muestra el resultado//
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int sumatoria=0,num=0,i;
	printf("Aqui escribiras 10 numeros para sumarlos a todos y al final se mostrara el resultado\n");
	for(i=0;i<10;i++)//Mediante el ciclo for se iran imprimiendo los diez numeros a escoger del usuario//
	{
		printf("Escribe un numero para sumar         ");
		scanf("%d",&num);
		sumatoria= sumatoria + num; //Esta es la formula para que el programa realice las operaciones//
	}
	printf("La sumatoria de los numeros es: %d",sumatoria); //En este comentario se imprime el resultado//
	system ("pause>nul");
	return 0;
}
