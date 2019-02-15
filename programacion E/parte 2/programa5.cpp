//Programa anterior con aplicacion while//
#include <stdio.h> 
#include <conio.h> 
int main() 
{ 
   int i, posicion, mayor, numero; //Inicializacion de las funciones dentro del main//
   int var[10]= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; 
   for(i=0; i<10; i++) 
   {
   	  printf("Dame un numero mayor a 23 en la posicion %d\n", i); 
      scanf("%d", &numero);  
      
      
      
      while(numero<= 23) //While cumple la funcion del comparativo para asegurarse de que los numeros a ingresar dentro del array sean mayores a 23//
           {
           	 printf("Ese dato no es valido\n");//El programa dara un mensaje si los numeros no son mayores a 23 y no seran guardados en las casillas del array//
	         scanf("%d", &numero); 
           }
   }  
   return 0; 
}
