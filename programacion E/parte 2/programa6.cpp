//Programa que hace la sumatora de las potencias cubicas desde 5 hasta el valor de la variable N//
#include <iostream> 
#include <math.h> 
int i=5;  
int num;
int N=0; 
int pot; 
int suma; 
int sumatoria;     
int main() 
{   
    
    int num; int N=0; //La variable N se declara con valor nulo//
    printf("Ingresa el valor de N\n"); 
	scanf("%d", &N); 
    {
    
	while(N<=5) //Comparativo que no permite que el valor de N sea menor o igual a 5//
	    { 
      	printf("Ese dato no es valido\n"); 
	    scanf("%d", &N); 
	    
     	}  
     	
	for(i=5; i<=N; i++)  
	{
		pot=pow (i,3);                     
		suma=suma+pot;
		suma=suma;
    } 
	printf("La sumatoria de las potencias es %d\n", suma); 
	
	return 0;  
	
    } 
    
}

