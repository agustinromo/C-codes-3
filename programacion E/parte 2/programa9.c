//Programa de arreglo de numeros mayores a 23 //
#include <conio.h>
#include <stdio.h>
int main()
{
	int n[10]={0};
	int i=0,x=0,POS=0,SUST=0;
	
	for(i=1;i<=10;i++)
	{
		printf("Ingresa tu cantidad %d :   ",i);
		scanf("%d",&n[i]);                  //asignacion de los valores escaneados en el arreglo//
	}
	printf("Los elementos del primer arreglo son:\n");
	for(i=1;i<=10;i++)
	{ 
		printf("%d     ",n[i]);            //imprimir el arreglo original ingresado por el usuario//
	} 
	printf("Ingresa la posicion del 0 al 9 para editar el arrelgo   :   ");
	scanf("%d",&POS);
	for(i=1;i<=10;i++)               //Verifica la veracidad//
	{ 
			while(POS<0,POS>9) //Repite el ciclo en caso de que el numero sea incorrecto//
	     {
		     printf("El numero no esta dentro del rango solicitado\n\nIngresa otro numero  \n");
	         scanf("%d",&POS);
	     }
	}
	n[i]=POS;   //se proporciona la posicion donde se va a almacenar el valor nuevo//

    printf("\nIngrese su nuevo numero:\n");
    scanf("%d",&SUST);
    n[i]=SUST;         //se guarda el valor nuevo en la posicion indicada
    for(i=1;i<=10;i++)//ciclo para imprimir el nuevo arreglo
    {
    	   printf("%d     ",n[i]);  //se muestra el arreglo ya modificado//
    }
    return 0;
}
