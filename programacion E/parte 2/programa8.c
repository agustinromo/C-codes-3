//Programa que acomoda y busca los numeros de un arreglo //
#include  <conio.h>
#include  <stdio.h>
void save(int a[]);
void imprimir(int vect[]);
void busqueda(int bus[]);
int main()
{
	int num[10]={0};                        //inicializacion del arreglo//
	save(num);
	imprimir(num);
	busqueda(num);
	return 0;
}
void save(int n[])                      //guarda los valores del array//
{
	int d=0;
	for(d=0;d<10;d++)                      //Ingresa los valores a guardar el en array//
	{
		printf("Ingresa un numero %d:\n",d+1);
		scanf("%d",&n[d]);
    }
}

void imprimir(int vect[])                   //funcion para imprimir el arreglo//
{
	int y=0;
	printf("valores del primer arreglo\n");
	for(y=0;y<10;y++)
	{
		printf(" %i ",vect[y]);
    }
}
void busqueda(int bus[])         //funcion para registrar y buscar la variable que el usuario desee//
{
	int bu=0, i=0;
	int cont_var=0;
		printf("Ingresa el valor a buscar en el arreglo  : \n");
		scanf("%d",&bu);
		for(i=0;i<10;i++)      //hace el ciclo para buscar en los elementos del arreglo//
	{
	 if (bu==bus[i])           //Este es el if para buscar un numero en el arreglo//
       {
           cont_var++;
       }
    }
    printf("El valor esta %d veces en el arreglo\n", cont_var);
}
