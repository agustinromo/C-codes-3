//Programa 1 "Struck"//
#include <conio.h>
#include <stdio.h>
int main()
{
	struct                                // estructura principal donde encontramos las variables a usar en el programa//
	{
		char cliente[20];  
		float precio_unitario;
		struct                   //estructura local donde se guarda 2 tipos variables//
	   {
		int cant_total;
		char cant_uni;
	   }cantidad;
	}mercancia;

	
	float valor_total=0;         //Declaracion e inicializacion de las variables//
	
	printf("CLIENTE: \n");
	scanf("%s",&mercancia.cliente);
	printf("\nPRECIO UNITARIO:\n");
	scanf("%f",&mercancia.precio_unitario);
	printf("\nCANTIDAD Y PREFIJO DE LA PIEZA: \n");
	scanf("%d   %c",&mercancia.cantidad.cant_total,&mercancia.cantidad.cant_uni);
	valor_total=mercancia.cantidad.cant_total*mercancia.precio_unitario;//se toma el valor de cantidad de la estructura 
		
		printf("\n\n");
		printf("Cliente:                  %s\n",mercancia.cliente);
		printf("Precio unitario:  $%f\n",mercancia.precio_unitario);
		printf("Cantidad:         %d %c",mercancia.cantidad.cant_total,mercancia.cantidad.cant_uni);//imprime los datos//
		printf("\nValor total:      $%f\n",valor_total);	                                        //que ya estaban guardados//
		return 0;
}
