//Programa 1 de punteros //
#include <conio.h>
#include <stdio.h>
void puntero(int *dest);             //Usar NULL para cuando una direccion quede afuera de la funcion//
int main()
{
	int x=0;
	printf("Ingresa el valor de x \n");
	scanf("%d",&x);
	puntero(&x);               //Dirige la variable al numero que debe tener//
	return 0;
}
void puntero(int *dest)
{
	int y=0;
	y=*dest;
	printf("El valor guardado en el puntero es %d \n",y);
}
