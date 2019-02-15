//Programa 2//
#include <stdio.h>
#include <conio.h>
int main()
{
	int suma_real=0;
    float suma_imaginario=0;
    
	struct imagi_real           //declaracion y nombre de la estructura// 
  {
	int num_real1,num_real2;
	float num_ima1,num_ima2;
  }numeros;                     //directivo de la estructura//
  
		printf("Ingresa el primer numero real\n");
		scanf("%d",&numeros.num_real1);
		printf("Ingresa el primer numero imaginario\n");
		scanf("%f",&numeros.num_ima1);
		printf("Ingresa el segundo numero real\n");
		scanf("%d",&numeros.num_real2);
		printf("Ingresa el segundo numero imaginario\n");
		scanf("%f",&numeros.num_ima2);
		suma_real=numeros.num_real1+numeros.num_real2;
		suma_imaginario=numeros.num_ima1+numeros.num_ima2;
		printf("El resultado de la suma de los numeros imaginarios es  %f\n",suma_imaginario);
		printf("El resultado de la suma de los numeros reales es %d",suma_real);
	return 0;
}
