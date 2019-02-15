//Programa anterior con opcion de sustitucion en 0 y 9 //
#include <conio.h>
#include <stdio.h>
int main()
{
	int n[10]={0};
	int i=0,x=0,POS=0,SUST=0;
	for(i=1;i<=10;i++)            //ciclo for para ingresar valores//
	{
		printf("Ingrese el valor %d :   ",i);
		scanf("%d",&n[i]);
	}
	printf("Los valores del primer arreglo son:\n");
	for(i=1;i<=10;i++)               // ciclo para imprimir el primer arreglo // 
	{
		printf("%d     ",n[i]);
	}
	printf("\ningrese la posicion del 0 al 9 para sustituir un numero    :   ");
	scanf("%d",&POS);
	for(i=1;i<=10;i++)      //cilo para ingresar el primer valor que se va a cambiar y comprobar las condiciones//
	{
			while(POS<0,POS>9)
	     {
		     printf("El numero no esta dentro del rango solicitado\n\nIngrese otro numero  \n");
	         scanf("%d",&POS);
	     }
	}
	n[i]=POS;           //posicion en ls que se guarda el valor ingresado//
	printf("\nIngrese el numero nuevo en el arreglo:\n");
    scanf("%d",&SUST); 
		 for(i=10;i>POS;--i)
    {
		 n[i]=n[i-1];
    }
    n[POS]=SUST;
    printf("El nuevo arreglo con el numero sustituido es:\n");
    for(i=1;i<=10;i++)         //se imprime el nuevo arreglo con la modificacion//
    {
    	   printf("%d     ",n[i]);
    }
}
