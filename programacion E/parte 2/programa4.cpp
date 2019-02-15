//Programa que acepta solo numeros mayores a 23 en un arreglo//
#include <stdio.h> 
#include <conio.h>  
int posicion; 
int mayor; 
int i; 
int numero;  
int main() 
{ 
    int var[10]= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};//En este array se guardaran los diez numeros mayores a 23//
    for(i=0; i<10; i++) 
    { 
        printf("Dame un numero mayor a 23 en la posicion %d\n", i); 
        scanf("%d", &numero);  
    
   
     
    if (numero<= 23) //Comparativo con el que el programa se asegura de que los numeros ingresados sean mayores a 23, de no ser asi no seran guardados en el arreglo//
	   { 
	   printf("Ese dato no es valido\n");
	   scanf("%d", &numero); 
       } 
      
 }
    return 0;
}
    
     
    
