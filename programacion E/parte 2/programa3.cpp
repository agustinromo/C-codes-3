//Programa para comparar cual de los numeros de un arreglo es el mayor y en que posicion se encuentra//
#include <stdio.h> 
#include <conio.h>
int posicion;
int i; 
int mayor; 
int main() 
{ 
    int var[10]= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; 
    for(i=0; i<10; i++) 
    { 
        printf("Dame un numero en la posicion %d\n", i); 
        scanf("%d", &var[i]);  
    }  
    int mayor; 
    for(i=0; i<10; i++)
	{ 
	 
    if(mayor<var[i])  //Aqui se usa el comparativo if para ver cual es el numero mayor y en que casilla del array fue guardado//
    {
    posicion = i;
    mayor=var[i];
	}
} 
    printf("El mayor es %d y se encuentra en la posicion %d\n",mayor, posicion); 
    return 0;
}
    
     
    
    
   
